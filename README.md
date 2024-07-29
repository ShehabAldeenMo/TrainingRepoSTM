# TrainingRepoSTM

## Overview

This presentation provides an introduction to Git and GitHub, covering their fundamental concepts, features, and use cases. It is designed to help both beginners and those looking to deepen their understanding of version control and collaborative software development.

## Table of Contents

1. [Introduction to Git](#introduction-to-git)
2. [Git Basics](#git-basics)
3. [Understanding GitHub](#understanding-github)
4. [Key Features of GitHub](#key-features-of-github)
5. [Best Practices](#best-practices)
6. [Resources](#resources)
7. [Branches](#Branches)
8. [Cloning a Repository](#cloning-a-repository)
9. [Checking Status](#checking-status)
10. [Adding Files](#adding-files)
11. [Committing Changes](#committing-changes)
12. [Viewing Commit History](#viewing-commit-history)
13. [Removing Reset Files](#removing-reset-files)
15. [Using .gitignore](#using-gitignore)

## Introduction to Git

### What is Git?
Git is a distributed version control system (DVCS) designed to track changes in source code during software development. It allows multiple developers to work on a project simultaneously, manage different versions of the code, and maintain a history of changes.

### Why Use Git?
- **Collaboration:** Enables multiple developers to work together on the same project.
- **Version Control:** Keeps track of every change made to the codebase.
- **Branching and Merging:** Facilitates the development of new features or fixes in isolated environments.
- **Backup and Recovery:** Ensures that the project can be restored to a previous state if needed.

## Git Basics

### Key Concepts
- **Repository (Repo):** A storage space where your project resides. It contains all files, history, and version information.
- **Commit:** A snapshot of changes made to the repository. Each commit has a unique ID and message describing the changes.
- **Branch:** A parallel version of the project where changes can be made without affecting the main codebase.
- **Merge:** The process of combining changes from different branches.
- **Pull:** Fetches updates from a remote repository and merges them into your local branch.
- **Push:** Sends your local changes to a remote repository.

## Understanding GitHub

### What is GitHub?
GitHub is a web-based platform that uses Git for version control and provides additional features for collaboration, project management, and code sharing. It hosts repositories in the cloud, making them accessible to developers worldwide.

### Why Use GitHub?
- **Centralized Collaboration:** Allows developers to work together from anywhere.
- **Code Review:** Facilitates reviewing and discussing code changes through pull requests.
- **Project Management:** Offers tools like issues, milestones, and project boards to track progress and manage tasks.
- **Integration:** Supports integration with various tools and services for continuous integration/continuous deployment (CI/CD), testing, and more.

## Key Features of GitHub

### Repositories
- **Public Repositories:** Open to everyone; anyone can view or contribute.
- **Private Repositories:** Restricted access, ideal for confidential projects.

### Pull Requests
- A method for proposing changes to the codebase. They allow team members to review and discuss the changes before merging them into the main branch.

### Issues
- A tool for tracking bugs, feature requests, and other tasks. Issues can be tagged, assigned, and linked to pull requests.

### Actions
- GitHub Actions enable automation of workflows, such as running tests or deploying code based on triggers like push events.

### Wikis and Pages
- **Wikis:** For documentation and information sharing within a repository.
- **GitHub Pages:** For hosting static websites directly from a repository.

## Best Practices

1. **Use Descriptive Commit Messages:** Clearly describe the changes made in each commit.
2. **Branching Strategy:** Use branches to develop features, fix bugs, or experiment.
3. **Code Reviews:** Regularly review code through pull requests to maintain quality and share knowledge.
4. **Regular Backups:** Keep your local and remote repositories synchronized.

## Resources

- [Git Documentation](https://git-scm.com/doc)
- [GitHub Guides](https://guides.github.com/)
- [Pro Git Book](https://git-scm.com/book/en/v2)
- [GitHub Learning Lab](https://lab.github.com/)

## Branches
Most of these commands that I don't remeber them all but I try to collect them in one file

![1](https://github.com/user-attachments/assets/35fd7305-9cf4-4c07-bef0-b29d353d1ec1)

### 1. Creating a Branch

Create a new branch called `branch-name`.
```
git branch branch-name
```

### 2. Listing Branches

List all branches in the repository, indicating the current branch with an asterisk.
```
git branch
```

### 3. git switch

Create a new branch called `branch-name`.
```
git switch branch-name
```

### 4. Renaming a Branch

Rename a specific branch `old-name` to `new-name`.
```
git branch -m old-name new-name
```

### 5. Deleting a Branch

Create a new branch called `branch-name`.
```
git branch -d branch-name
```

### 6. Merging Branches  

Merge the changes from `branch-name` into the current branch.
```
git merge branch-name
```

### 7. Rebasing a Branch

Rebase the current branch onto `base-branch`.
```
git rebase base-branch
```

### 8. Pushing Branches

Push a new branch to the remote repository.
```
git push origin branch-name
```

### 9. Deleting Remote Branches

Delete a branch on the remote repository.
```
git push origin --delete branch-name
```

### 10. Tracking Branches
Set up a local branch to track a remote branch.

```
git branch --track local-branch-name origin/remote-branch-name
```

## Cloning a Repository

Clone an existing repository from a remote server to your local machine.
```
git clone https://github.com/username/repository.git
```

## Checking Status
Check the status of your working directory and staging area. This command shows which changes have been staged, which haven't, and which files aren't being tracked by Git.

```
git status
```

## Adding Files
+ Stage changes (new files, modifications, deletions) to the staging area, preparing them for the next commit.
```
git add filename
```

+ Stage all changes in the current directory.
```
git add .
```


## Committing Changes
Commit the staged changes to the repository with a descriptive message.
```
git commit -m "Your commit message here"
```


## Viewing Commit History
+ Show a list of all previous commits in the repository, along with details like commit ID, author, date, and message.
```
git log
```

+ Display a one-line summary of each commit.
```
git log --oneline
```

## Removing Reset Files
+ Remove a file from the working directory and the staging area.
```
git rm filename
```

+ Remove a file only from the staging area but keep it in the working directory.
```
git rm --cached filename
```

+ Unstage a file, keeping the changes in the working directory.

```
git reset filename
```

+ Reset the staging area and the working directory to the last commit state.
```
git reset --hard
```


## Using .gitignore
The `.gitignore` file is a powerful tool in Git that helps manage which files and directories should be ignored by version control. This is useful for keeping your repository clean from unnecessary files, such as temporary files, build outputs, and other files that do not need to be tracked.


### 1. Creating a .gitignore File

To create a `.gitignore` file, simply create a new file named `.gitignore` in the root directory of your Git repository. You can also create it in subdirectories if you want to ignore files specific to those directories.

### 2. Adding Patterns to .gitignore
+ Ignore all .log files: *.log
+ Ignore node_modules directory: node_modules/
+ Ignore a specific file: secret_config.json



