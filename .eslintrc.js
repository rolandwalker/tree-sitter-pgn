module.exports = {
  'env': {
    'commonjs': true,
    'es2021': true,
  },
  'parserOptions': {
    'ecmaVersion': 'latest',
    'sourceType': 'module',
  },
  'rules': {
    'indent': ['error', 2, {'SwitchCase': 1}],
    'max-len': [
      'error',
      {'code': 120, 'ignoreComments': true, 'ignoreUrls': true, 'ignoreStrings': true},
    ],
  },
};
