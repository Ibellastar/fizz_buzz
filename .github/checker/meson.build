project('FizzBuzz', 'c',
  version: '0.1',
  default_options: [
    'c_std=c99',
    'warning_level=3',
  ]
)

unity_subproject = subproject('unity')
unity_dependency = unity_subproject.get_variable('unity_dep')
unity_gen_runner = unity_subproject.get_variable('gen_test_runner')

inc = include_directories('../../src')

test_1 = executable('test_1',
  sources: [
    files([
      '../../src/fizz_buzz.c',
      'tests/test_1/test_1.c',
    ]),
    unity_gen_runner.process('tests/test_1/test_1.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Test 1 Better Title Here', test_1)

test_2 = executable('test_2',
  sources: [
    files([
      '../../src/fizz_buzz.c',
      'tests/test_2/test_2.c',
    ]),
    unity_gen_runner.process('tests/test_2/test_2.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Test 2 Better Title Here', test_2)

test_3 = executable('test_3',
  sources: [
    files([
      '../../src/fizz_buzz.c',
      'tests/test_3/test_3.c',
    ]),
    unity_gen_runner.process('tests/test_3/test_3.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Test 3 Better Title Here', test_3)

test_4 = executable('test_4',
  sources: [
    files([
      '../../src/fizz_buzz.c',
      'tests/test_4/test_4.c',
    ]),
    unity_gen_runner.process('tests/test_4/test_4.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Test 4 Better Title Here', test_4)

# test1_1 = executable('test_three',
#   sources: [
#     files([
#       '../../src' / 'fizz_buzz.c',
#       'test' / 'test_three.c',
#     ]),
#     unity_gen_runner.process('test' / 'test_three.c')
#   ],
#   include_directories: [ inc ],
#   dependencies: [ unity_dependency ],
# )


# test('Prints 1-3', test1_1)

# test1_2 = executable('test_five',
#   sources: [
#     files([
#       '../../src' / 'fizz_buzz.c',
#       'test' / 'test_five.c',
#     ]),
#     unity_gen_runner.process('test' / 'test_five.c')
#   ],
#   include_directories: [ inc ],
#   dependencies: [ unity_dependency ],
# )


# test('Prints 1-5', test1_2)

# test1_3 = executable('test_fifteen',
#   sources: [
#     files([
#       '../../src' / 'fizz_buzz.c',
#       'test' / 'test_fifteen.c',
#     ]),
#     unity_gen_runner.process('test' / 'test_fifteen.c')
#   ],
#   include_directories: [ inc ],
#   dependencies: [ unity_dependency ],
# )


# test('Prints 1-15', test1_3)

# test1_4 = executable('test_seventeen',
#   sources: [
#     files([
#       '../../src' / 'fizz_buzz.c',
#       'test' / 'test_seventeen.c',
#     ]),
#     unity_gen_runner.process('test' / 'test_seventeen.c')
#   ],
#   include_directories: [ inc ],
#   dependencies: [ unity_dependency ],
# )


# test('Prints 1-17', test1_4)