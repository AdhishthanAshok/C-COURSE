# Import the selenium webdriver module
from selenium import webdriver

# Create a webdriver instance for Chrome
driver = webdriver.Chrome()

# Navigate to the sample web application
driver.get("https://example.com/login")

# Locate the username and password fields by their id attributes
username = driver.find_element_by_id("username")
password = driver.find_element_by_id("password")

# Enter the login credentials
username.send_keys("testuser")
password.send_keys("testpass")

# Locate the login button by its class name and click it
login_button = driver.find_element_by_class_name("login-button")
login_button.click()

# Verify that the login was successful by checking the page title
assert driver.title == "Welcome, testuser!"

# Close the browser
driver.quit()
