// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

package co.ledger.core;

import java.util.HashMap;

public final class HttpResponse {


    /*package*/ final int statusCode;

    /*package*/ final String statusText;

    /*package*/ final HashMap<String, String> headers;

    /*package*/ final byte[] body;

    public HttpResponse(
            int statusCode,
            String statusText,
            HashMap<String, String> headers,
            byte[] body) {
        this.statusCode = statusCode;
        this.statusText = statusText;
        this.headers = headers;
        this.body = body;
    }

    public int getStatusCode() {
        return statusCode;
    }

    public String getStatusText() {
        return statusText;
    }

    public HashMap<String, String> getHeaders() {
        return headers;
    }

    public byte[] getBody() {
        return body;
    }

    @Override
    public String toString() {
        return "HttpResponse{" +
                "statusCode=" + statusCode +
                "," + "statusText=" + statusText +
                "," + "headers=" + headers +
                "," + "body=" + body +
        "}";
    }

}