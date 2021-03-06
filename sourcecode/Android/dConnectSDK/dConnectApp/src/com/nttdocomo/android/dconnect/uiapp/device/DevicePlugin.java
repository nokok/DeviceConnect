package com.nttdocomo.android.dconnect.uiapp.device;

/**
 * デバイスプラグイン.
 */
public class DevicePlugin {

    /**
     * デバイスプラグイン名.
     */
    private String mName;

    /**
     * デバイスプラグインID.
     */
    private String mId;

    /**
     * コンストラクタ.
     * @param name デバイスプラグイン名
     * @param id デバイスプラグインID
     */
    public DevicePlugin(final String name, final String id) {
        mName = name;
        mId = id;
    }
    
    /**
     * デバイスプラグイン名を取得する.
     * @return デバイスプラグイン名
     */
    public String getName() {
        return mName;
    }

    /**
     * デバイスプラグインIDを取得する.
     * @return デバイスプラグインID
     */
    public String getId() {
        return mId;
    }
}
