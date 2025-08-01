# My SQLite Clone – Learning Database Internals in C

This project is my personal implementation of a simple SQLite clone. The goal was to deepen my understanding of how databases work under the hood by building one from scratch in C.

## Table of Contents

- [About the Project](#about-the-project)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [My Learning Notes](#my-learning-notes)
- [Future Direction](#future-direction)

## About the Project
  
The project implements a basic database engine, exploring core concepts such as:

- Parsing SQL-like input
- Memory management and paging
- Data serialization and deserialization
- Simple B-tree structures

## Features

- Insert and select commands (with a simple SQL-like interface)
- Persistent storage using a custom file format
- Row serialization and deserialization
- Basic REPL (Read-Eval-Print Loop)

## Getting Started

### Prerequisites

- GCC or another C compiler
- GNU Make or compatible
- Recommended: Unix/Linux environment

### Clone and Build

```bash
git clone https://github.com/shrey1605/Sqlite-clone-in-C.git
cd Sqlite-clone-in-C
make db
```

### Run

```bash
./db
```

## Usage

- Type `.exit` to quit.
- Supported commands:
  - `insert <id> <username> <email>` – Insert a new row.
  - `select` – Display all rows.

Example:

```shell
insert 1 alice alice@example.com
select
.exit
```

## My Learning Notes

This project was an invaluable learning experience. Key takeaways:

- Low-level file I/O and memory management in C
- Implementing basic parsing and serialization
- Understanding how real-world databases store and retrieve data

## Future Direction
Doing this I was really fascinated by the way databases are written, so I really want to expand this project to resemble something closer to a functioning database. Here are some ways I plan to expand this project, focusing on realistic, incremental features for learning and practical application:
- Support for more SQL commands (`UPDATE`, `DELETE`, `WHERE`, etc.)
- Query and error logging
- Simple authentication and user roles
- Basic indexing for faster queries
- CSV import/export
- Command history in the REPL
