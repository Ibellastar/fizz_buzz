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

test1_1 = executable('test_seventeen',
  sources: [
    files([
      '../../src' / 'fizz_buzz.c',
      'test' / 'test_seventeen.c',
    ]),
    unity_gen_runner.process('test' / 'test_seventeen.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Prints Fizz and some other stuff', test1_1)

test1_2 = executable('test_three',
  sources: [
    files([
      '../../src' / 'fizz_buzz.c',
      'test' / 'test_three.c',
    ]),
    unity_gen_runner.process('test' / 'test_three.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Prints Fizz', test1_2)

# test1_2 = executable('test_fizz',
#   sources: [
#     files([
#       '../../src' / 'fizz_buzz_in_c.c',
#       'test' / 'test_fizz.c',
#     ]),
#     unity_gen_runner.process('test' / 'test_fizz.c')
#   ],
#   include_directories: [ inc ],
#   dependencies: [ unity_dependency ],
# )


# test('Prints Fizz', test1_2)

# test1_3 = executable('test_fizzbuzz',
#   sources: [
#     files([
#       '../../src' / 'fizz_buzz_in_c.c',
#       'test' / 'test_fizzbuzz.c',
#     ]),
#     unity_gen_runner.process('test' / 'test_fizzbuzz.c')
#   ],
#   include_directories: [ inc ],
#   dependencies: [ unity_dependency ],
# )


# test('Prints FizzBuzz', test1_3)

# test1_4 = executable('test_number',
#   sources: [
#     files([
#       '../../src' / 'fizz_buzz_in_c.c',
#       'test' / 'test_number.c',
#     ]),
#     unity_gen_runner.process('test' / 'test_number.c')
#   ],
#   include_directories: [ inc ],
#   dependencies: [ unity_dependency ],
# )


# test('Prints Number', test1_4)