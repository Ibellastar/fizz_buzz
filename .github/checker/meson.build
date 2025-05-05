project('Multiplier', 'c',
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

test1_1 = executable('test_negative_and_positive',
  sources: [
    files([
      '../../src' / 'multiplier.c',
      'test' / 'test_negative_and_positive.c',
    ]),
    unity_gen_runner.process('test' / 'test_negative_and_positive.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Negative and positive number', test1_1)

test1_2 = executable('test_positive_numbers',
  sources: [
    files([
      '../../src' / 'multiplier.c',
      'test' / 'test_positive_numbers.c',
    ]),
    unity_gen_runner.process('test' / 'test_positive_numbers.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Positive numbers', test1_2)

test1_3 = executable('test_two_negatives',
  sources: [
    files([
      '../../src' / 'multiplier.c',
      'test' / 'test_two_negatives.c',
    ]),
    unity_gen_runner.process('test' / 'test_two_negatives.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Negative numbers', test1_3)

test1_4 = executable('test_zero_multiplication',
  sources: [
    files([
      '../../src' / 'multiplier.c',
      'test' / 'test_zero_multiplication.c',
    ]),
    unity_gen_runner.process('test' / 'test_zero_multiplication.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Zero times a number', test1_4)

test1_5 = executable('test_zero_times_zero',
  sources: [
    files([
      '../../src' / 'multiplier.c',
      'test' / 'test_zero_times_zero.c',
    ]),
    unity_gen_runner.process('test' / 'test_zero_times_zero.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Zero times zero', test1_5)