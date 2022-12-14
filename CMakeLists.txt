cmake_minimum_required(VERSION 3.0.0)

project(GolfMembersManager)

add_executable(${PROJECT_NAME}
    ./src/main.cpp
    ./src/GolfMembershipManager.cpp
    
    ./src/app/Controller/Controller.cpp
    ./src/app/Entity/MembersEntity.cpp
    ./src/app/Listener/Listener.cpp
    
    ./src/hw/Monitor/Monitor.cpp
    ./src/hw/rfid/mfrc522.cpp
    ./src/hw/rfid/CardReader.cpp
    ./src/hw/spi/SPI.cpp
    )
    
    target_include_directories(${PROJECT_NAME} PUBLIC
    ./src
    
    ./src/app/Controller
    ./src/app/Entity
    ./src/app/Listener
    ./src/app/Model
    
    ./src/hw/Monitor
    ./src/hw/rfid
    ./src/hw/spi
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    -lwiringPi
)

target_compile_options(${PROJECT_NAME} PUBLIC
    -Wall
)