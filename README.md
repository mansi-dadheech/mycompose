# Creating Multi-Tier Architecture
Here is my first docker project of creating multi-tier architecture for Drupal and MySql using docker compose.Docker-compose is controlled with the docker-compose.yml file, which tells Docker which containers to start, how to network them together so they serve Drupal, and how to connect them to the host machine.
Drupal is content management software. It's used to make many of the websites and applications. 

Here are the steps that I followed:

STEP 1: General Set UP:
* Installation of Docker Docker Compose.
* Starting Docker Services.

STEP 2: Setting up Drupal and Mysql:
* Creating a new directory called drupal and cd into it:
* Creating a file named docker-compose.yml in this folder and add the following contents.

![Screenshot (51)](https://user-images.githubusercontent.com/48363834/82206582-1d716880-9926-11ea-8bdd-8cc6a20e38d4.png)


* From the drupal directory, start Docker containers:
#docker-compose up 

![Screenshot (50)](https://user-images.githubusercontent.com/48363834/82208724-a8079700-9929-11ea-8aa9-404568e3b932.png)

* The Docker containers will take a minute or two to start up Drupal and MySQL. Afterwards, we can visit our IP address in our web browser and we should be directed to the Drupal setup form.

![Screenshot (52)](https://user-images.githubusercontent.com/48363834/82208735-ac33b480-9929-11ea-8b86-9b02dada3864.png)

* On the Set up database page, we will select MySQL as the Database type and enter the Database name,Database username,Database password,Host (under Advanced Options).
* Create website page whatever you like to do.

![Screenshot (53)](https://user-images.githubusercontent.com/48363834/82208747-b05fd200-9929-11ea-9def-24e6eab4a9dd.png)

# Thank You
