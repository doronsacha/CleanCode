
//Bad Code
ProcessedData process_data(const Data& data) {
    // Perform data processing
    ProcessedData processed_data = perform_computation(data);

    // Store data in a database
    store_data_in_database(processed_data);

    // Send a notification email
    send_notification_email();

    // Return the processed data
    return processed_data;
}

//Good Code
// Perform data processing
ProcessedData process_data(const Data& data) {
    ProcessedData processed_data = perform_computation(data);
    return processed_data;
}

// Store data in a database
void store_data(const Data& data) {
    store_data_in_database(data);
}

// Send a notification
void send_notification() {
    send_notification_email();
}
