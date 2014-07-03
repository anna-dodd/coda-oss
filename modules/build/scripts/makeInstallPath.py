import os

def installPath(package_name):
    install_suffix = ''
    
    if 'studio11' in os.environ.get('JOB_NAME'):
        install_suffix = 'sparc-sun-solaris2.10-64-studio11'
    elif 'studio12' in os.environ.get('JOB_NAME') or 'solaris' in os.environ.get('JOB_NAME'):
        install_suffix = 'sparc-sun-solaris2.10-64-studio12'
    elif 'linux' in os.environ.get('JOB_NAME'):
        install_suffix = 'x86_64-linux-gnu-64'
    elif 'win32' in os.environ.get('JOB_NAME'):
        install_suffix = 'win32'
    elif 'win64' in os.environ.get('JOB_NAME'):
        install_suffix = 'win64'

    if '-mt' in os.environ.get('JOB_NAME'):
        install_suffix += '-mt'
    if '-vc9' in os.environ.get('JOB_NAME'):
        install_suffix += '-vc9'
    elif '-vc10' in os.environ.get('JOB_NAME'):
        install_suffix += '-vc10'
    
    install_path = "%s-%s-r%s" % (package_name,install_suffix,os.environ.get('SVN_REVISION', ''))
    return install_path