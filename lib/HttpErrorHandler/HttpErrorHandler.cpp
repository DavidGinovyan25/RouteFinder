#include "HttpErrorHandler.hpp"

std::string HttpErrorHandler::HandleNetworkErrors(cpr::Response& r) {
    switch (r.error.code) {
    case cpr::ErrorCode::OPERATION_TIMEDOUT:
        return "NetworkErrorCode: OPERATION_TIMEDOUT";
    case cpr::ErrorCode::COULDNT_CONNECT:
        return "NetworkError: COULDNT_CONNECT";
    case cpr::ErrorCode::HTTP_RETURNED_ERROR:
        return "NetworkError: HTTP_POST_ERROR";
    case cpr::ErrorCode::NO_CONNECTION_AVAILABLE:
        return "NetworkError: NO_CONNECTION_AVAILABLE";
    case cpr::ErrorCode::SSL_CONNECT_ERROR:
        return "NetworkError: SSL_CONNECT_ERROR";
    default:
        return "NetworkError: Unknown error";
    }
}
std::string HttpErrorHandler::HandleStatusCodeErrors(cpr::Response& r) {
    switch (r.status_code) {
    case static_cast<int>(StatusCode::BAD_REQUEST):
        return "HTTP code: BAD_REQUEST";
    case static_cast<int>(StatusCode::UNAUTHORIZED):
        return "HTTP code: UNAUTHORIZED";
    case static_cast<int>(StatusCode::FORBIDDEN):
        return "HTTP code: FORBIDDEN";
    case static_cast<int>(StatusCode::NOT_FOUND):
        return "HTTP code: NOT_FOUND";
    case static_cast<int>(StatusCode::TOO_MANY_REQUEST):
        return "HTTP code: TOO_MANY_REQUEST";
    case static_cast<int>(StatusCode::INTERNAL_SERVER_ERROR):
        return "HTTP code: INTERNAL_SERVER_ERROR";
    case static_cast<int>(StatusCode::SERVICE_UNAVAILABLE):
        return "HTTP code: SERVICE_UNAVIABLE";
    default:
        return "HTTP code: Unknown code";
    }
}