from distutils.core import setup
setup(name='XMNspendfrom',
      version='1.0',
      description='Command-line utility for clarity "coin control"',
      author='Gavin Andresen',
      author_email='gavin@clarityfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
