cmake_minimum_required(VERSION 3.15...3.26)
project(${SKBUILD_PROJECT_NAME} LANGUAGES C)

find_package(
  Python
  COMPONENTS Development.Module
  REQUIRED)

python_add_library(
  std_base_toknzer MODULE 
  std_base_toknzer/std_base_toknzer_module.c 
  std_base_toknzer/_tokenize.c
  std_base_toknzer/lexer/buffer.c
  std_base_toknzer/lexer/lexer.c
  std_base_toknzer/lexer/state.c
  std_base_toknzer/tokenizer/helpers.c
  std_base_toknzer/tokenizer/readline_tokenizer.c
  std_base_toknzer/tokenizer/string_tokenizer.c
  std_base_toknzer/tokenizer/utf8_tokenizer.c
  WITH_SOABI
)

install(TARGETS std_base_toknzer DESTINATION .)
