void func_00119df0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0x90;                                            // 0x00119df0: addiu $sp, $sp, -0x90
    a0 = 0xf;                                                   // 0x00119e04: addiu $a0, $zero, 0xf
    s3 = 0x25 << 16;                                            // 0x00119e0c: lui $s3, 0x25
    func_00118330();  // 118330                                // 0x00119e14: jal 0x118330
    s0 = s3 + -0x1e40;                                          // 0x00119e18: addiu $s0, $s3, -0x1e40
    v1 = 0x1f << 16;                                            // 0x00119e1c: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x00119e20: lw $v0, 0x3dc($v1)
    /* bnezl $v0, 0x119e38 */                                   // 0x00119e24: bnezl $v0, 0x119e38
    g_0024e1cc = s1;  // Global at 0x0024e1cc                   // 0x00119e28: sw $s1, 0xc($s0)
    func_00118460();  // 118460                                // 0x00119e2c: jal 0x118460
    /* nop */                                                   // 0x00119e30: nop 
    g_0024e1cc = s1;  // Global at 0x0024e1cc                   // 0x00119e34: sw $s1, 0xc($s0)
    v0 = 1;                                                     // 0x00119e38: addiu $v0, $zero, 1
    local_14 = v0;                                              // 0x00119e3c: sw $v0, 0x14($sp)
    a0 = sp + 0x10;                                             // 0x00119e40: addiu $a0, $sp, 0x10
    local_18 = 0;                                               // 0x00119e44: sw $zero, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00119e48: jal 0x1142e0
    local_24 = 0;                                               // 0x00119e4c: sw $zero, 0x24($sp)
    v1 = sp + 0x30;                                             // 0x00119e54: addiu $v1, $sp, 0x30
    v0 = 0x25 << 16;                                            // 0x00119e58: lui $v0, 0x25
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x00119e5c: sw $s1, -0x1e40($s3)
    s2 = v0 + -0x1200;                                          // 0x00119e60: addiu $s2, $v0, -0x1200
    a0 = 0x25 << 16;                                            // 0x00119e64: lui $a0, 0x25
    v0 = 4;                                                     // 0x00119e68: addiu $v0, $zero, 4
    g_0024e1c4 = v1;  // Global at 0x0024e1c4                   // 0x00119e6c: sw $v1, 4($s0)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x00119e70: sw $v0, 8($s0)
    a0 = a0 + -0x740;                                           // 0x00119e74: addiu $a0, $a0, -0x740
    a1 = 0xf;                                                   // 0x00119e7c: addiu $a1, $zero, 0xf
    local_0 = 0;                                                // 0x00119e80: sw $zero, 0($sp)
    t0 = 0x10;                                                  // 0x00119e88: addiu $t0, $zero, 0x10
    t2 = 4;                                                     // 0x00119e90: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x00119e94: jal 0x1176a8
    if (v0 >= 0) goto label_0x119ebc;                           // 0x00119e9c: bgez $v0, 0x119ebc
    v0 = 0x2000 << 16;                                          // 0x00119ea0: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x00119ea4: jal 0x1142f0
    func_00118360();  // 118360                                // 0x00119eac: jal 0x118360
    /* nop */                                                   // 0x00119eb0: nop 
    goto label_0x119ef4;                                        // 0x00119eb4: b 0x119ef4
    v0 = -1;                                                    // 0x00119eb8: addiu $v0, $zero, -1
label_0x119ebc:
    v0 = s2 | v0;                                               // 0x00119ebc: or $v0, $s2, $v0
    func_00118360();  // 118360                                // 0x00119ec0: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00119ec4: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x119ee0;                           // 0x00119ec8: bnez $s0, 0x119ee0
    /* nop */                                                   // 0x00119ecc: nop 
    SignalSema();  // 0x1142f0                                  // 0x00119ed0: jal 0x1142f0
    goto label_0x119ef4;                                        // 0x00119ed8: b 0x119ef4
    v0 = -1;                                                    // 0x00119edc: addiu $v0, $zero, -1
label_0x119ee0:
    PollSema();  // 0x114320                                    // 0x00119ee0: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x00119ee8: jal 0x1142f0
    v0 = local_30;                                              // 0x00119ef0: lw $v0, 0x30($sp)
label_0x119ef4:
    return;                                                     // 0x00119f08: jr $ra
    sp = sp + 0x90;                                             // 0x00119f0c: addiu $sp, $sp, 0x90
}