void func_001dd6a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x001dd6a8: addiu $sp, $sp, -0x50
    v1 = 0x22 << 16;                                            // 0x001dd6ac: lui $v1, 0x22
    v0 = -1;                                                    // 0x001dd6b4: addiu $v0, $zero, -1
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dd6c0: lw $a0, -0x308($v1)
    if (a0 == v0) goto label_0x1dd778;                          // 0x001dd6c8: beq $a0, $v0, 0x1dd778
    v1 = 0x33 << 16;                                            // 0x001dd6d0: lui $v1, 0x33
    v0 = g_0032fec0;  // Global at 0x0032fec0                   // 0x001dd6d4: lw $v0, -0x140($v1)
    v0 = ((unsigned)s1 < (unsigned)v0) ? 1 : 0;                 // 0x001dd6d8: sltu $v0, $s1, $v0
    if (v0 != 0) goto label_0x1dd6ec;                           // 0x001dd6dc: bnez $v0, 0x1dd6ec
    s2 = v1 + -0x140;                                           // 0x001dd6e0: addiu $s2, $v1, -0x140
    goto label_0x1dd778;                                        // 0x001dd6e4: b 0x1dd778
    v0 = -0xb;                                                  // 0x001dd6e8: addiu $v0, $zero, -0xb
label_0x1dd6ec:
    s0 = 0x33 << 16;                                            // 0x001dd6ec: lui $s0, 0x33
    g_0032ffc0 = s1;  // Global at 0x0032ffc0                   // 0x001dd6f0: sb $s1, -0x40($s0)
    PollSema();  // 0x114320                                    // 0x001dd6f4: jal 0x114320
    s0 = s0 + -0x40;                                            // 0x001dd6f8: addiu $s0, $s0, -0x40
    a0 = 0x33 << 16;                                            // 0x001dd6fc: lui $a0, 0x33
    t1 = 0x33 << 16;                                            // 0x001dd700: lui $t1, 0x33
    t3 = 0x1e << 16;                                            // 0x001dd704: lui $t3, 0x1e
    a0 = a0 + -0xa0;                                            // 0x001dd708: addiu $a0, $a0, -0xa0
    t1 = t1;                                                    // 0x001dd710: addiu $t1, $t1, 0
    t3 = t3 + -0x3548;                                          // 0x001dd714: addiu $t3, $t3, -0x3548
    local_0 = 0;                                                // 0x001dd718: sw $zero, 0($sp)
    a1 = 6;                                                     // 0x001dd71c: addiu $a1, $zero, 6
    a2 = 1;                                                     // 0x001dd720: addiu $a2, $zero, 1
    t0 = 0x10;                                                  // 0x001dd724: addiu $t0, $zero, 0x10
    func_001176a8();  // 1176a8                                // 0x001dd728: jal 0x1176a8
    if (v0 == 0) goto label_0x1dd74c;                           // 0x001dd730: beqz $v0, 0x1dd74c
    a0 = 0x25 << 16;                                            // 0x001dd734: lui $a0, 0x25
    func_00116508();  // 116508                                // 0x001dd73c: jal 0x116508
    a0 = &str_00248298;  // "sceUsbKbGetLocation: sceSifCallRpc -> %d\n" // 0x001dd740: addiu $a0, $a0, -0x7d68
    goto label_0x1dd778;                                        // 0x001dd744: b 0x1dd778
    v0 = -2;                                                    // 0x001dd748: addiu $v0, $zero, -2
label_0x1dd74c:
    a0 = 0x38;                                                  // 0x001dd74c: addiu $a0, $zero, 0x38
    v1 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dd750: lw $v1, 4($s2)
    v1 = v1 + a0;                                               // 0x001dd75c: addu $v1, $v1, $a0
    g_00330034 = 0;  // Global at 0x00330034                    // 0x001dd760: sw $zero, 0x34($v1)
    g_00330010 = 0;  // Global at 0x00330010                    // 0x001dd764: sw $zero, 0x10($v1)
    g_00330014 = 0;  // Global at 0x00330014                    // 0x001dd768: sw $zero, 0x14($v1)
    g_00330020 = 0;  // Global at 0x00330020                    // 0x001dd76c: sh $zero, 0x20($v1)
    g_0033002c = 0;  // Global at 0x0033002c                    // 0x001dd770: sw $zero, 0x2c($v1)
    g_00330030 = 0;  // Global at 0x00330030                    // 0x001dd774: sw $zero, 0x30($v1)
label_0x1dd778:
    return;                                                     // 0x001dd788: jr $ra
    sp = sp + 0x50;                                             // 0x001dd78c: addiu $sp, $sp, 0x50
}