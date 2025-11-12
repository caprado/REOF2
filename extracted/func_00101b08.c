void func_00101b08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00101b08: addiu $sp, $sp, -0x30
    a0 = 3;                                                     // 0x00101b0c: addiu $a0, $zero, 3
    func_001010c8();  // 0x100ea8                                // 0x00101b14: jal 0x100ea8
    if (v0 != 0) goto label_0x101b2c;                           // 0x00101b1c: bnez $v0, 0x101b2c
    v0 = 0x1f << 16;                                            // 0x00101b20: lui $v0, 0x1f
    goto label_0x101b90;                                        // 0x00101b24: b 0x101b90
    v0 = -1;                                                    // 0x00101b28: addiu $v0, $zero, -1
label_0x101b2c:
    a0 = 0x1f << 16;                                            // 0x00101b2c: lui $a0, 0x1f
    s0 = v0 + -0xf00;                                           // 0x00101b30: addiu $s0, $v0, -0xf00
    a0 = a0 + -0x580;                                           // 0x00101b34: addiu $a0, $a0, -0x580
    local_0 = 0;                                                // 0x00101b38: sw $zero, 0($sp)
    a1 = 4;                                                     // 0x00101b3c: addiu $a1, $zero, 4
    t2 = 4;                                                     // 0x00101b50: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x00101b54: jal 0x1176a8
    if (v0 >= 0) goto label_0x101b78;                           // 0x00101b5c: bgez $v0, 0x101b78
    v1 = 0x1f << 16;                                            // 0x00101b60: lui $v1, 0x1f
    v0 = 0x1f << 16;                                            // 0x00101b64: lui $v0, 0x1f
    iSignalSema();  // 0x114300                                 // 0x00101b68: jal 0x114300
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00101b6c: lw $a0, -0x20d4($v0)
    goto label_0x101b90;                                        // 0x00101b70: b 0x101b90
    v0 = -1;                                                    // 0x00101b74: addiu $v0, $zero, -1
label_0x101b78:
    v0 = 0x2000 << 16;                                          // 0x00101b78: lui $v0, 0x2000
    v0 = s0 | v0;                                               // 0x00101b7c: or $v0, $s0, $v0
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00101b80: lw $a0, -0x20d4($v1)
    iSignalSema();  // 0x114300                                 // 0x00101b84: jal 0x114300
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00101b88: lw $s0, 0($v0)
label_0x101b90:
    return;                                                     // 0x00101b98: jr $ra
    sp = sp + 0x30;                                             // 0x00101b9c: addiu $sp, $sp, 0x30
}