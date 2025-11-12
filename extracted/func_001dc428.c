void func_001dc428() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001dc428: addiu $sp, $sp, -0x40
    func_0011d378();  // 0x11d320                                // 0x001dc43c: jal 0x11d320
    a0 = 3;                                                     // 0x001dc448: addiu $a0, $zero, 3
    v0 = 0x33 << 16;                                            // 0x001dc44c: lui $v0, 0x33
    AddDmacHandler();  // 0x113fe0                              // 0x001dc450: jal 0x113fe0
    a1 = g_0032ff5c;  // Global at 0x0032ff5c                   // 0x001dc454: lw $a1, -0xa4($v0)
    if (s0 != 0) goto label_0x1dc46c;                           // 0x001dc45c: bnez $s0, 0x1dc46c
    /* nop */                                                   // 0x001dc460: nop 
    func_00114e28();  // 0x114dc0                                // 0x001dc464: jal 0x114dc0
    a0 = 3;                                                     // 0x001dc468: addiu $a0, $zero, 3
label_0x1dc46c:
    if (s1 == 0) goto label_0x1dc47c;                           // 0x001dc46c: beqz $s1, 0x1dc47c
    /* nop */                                                   // 0x001dc470: nop 
    func_0011d390();  // 0x11d378                                // 0x001dc474: jal 0x11d378
    /* nop */                                                   // 0x001dc478: nop 
label_0x1dc47c:
    if (s0 >= 0) goto label_0x1dc498;                           // 0x001dc47c: bgez $s0, 0x1dc498
    s1 = 0x22 << 16;                                            // 0x001dc480: lui $s1, 0x22
    a0 = 0x25 << 16;                                            // 0x001dc484: lui $a0, 0x25
    s2 = 1;                                                     // 0x001dc488: addiu $s2, $zero, 1
    func_00116598();  // 0x116508                                // 0x001dc48c: jal 0x116508
    a0 = &str_00248218;  // "libusbkb.a : DeleteSema() --> error\n" // 0x001dc490: addiu $a0, $a0, -0x7de8
    s1 = 0x22 << 16;                                            // 0x001dc494: lui $s1, 0x22
label_0x1dc498:
    s0 = -1;                                                    // 0x001dc498: addiu $s0, $zero, -1
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dc49c: lw $a0, -0x308($s1)
    if (a0 == s0) goto label_0x1dc4d4;                          // 0x001dc4a0: beq $a0, $s0, 0x1dc4d4
    v0 = -1;                                                    // 0x001dc4a4: addiu $v0, $zero, -1
    SignalSema();  // 0x1142f0                                  // 0x001dc4a8: jal 0x1142f0
    /* nop */                                                   // 0x001dc4ac: nop 
    if (v0 >= 0) goto label_0x1dc4d0;                           // 0x001dc4b0: bgezl $v0, 0x1dc4d0
    g_0021fcf8 = s0;  // Global at 0x0021fcf8                   // 0x001dc4b4: sw $s0, -0x308($s1)
    a0 = 0x25 << 16;                                            // 0x001dc4b8: lui $a0, 0x25
    s2 = s2 + 1;                                                // 0x001dc4bc: addiu $s2, $s2, 1
    func_00116598();  // 0x116508                                // 0x001dc4c0: jal 0x116508
    a0 = &str_00248248;  // "sceUsbKbGetInfo: sceSifCallRpc -> %d\n" // 0x001dc4c4: addiu $a0, $a0, -0x7db8
    goto label_0x1dc4d4;                                        // 0x001dc4c8: b 0x1dc4d4
    v0 = -1;                                                    // 0x001dc4cc: addiu $v0, $zero, -1
label_0x1dc4d0:
    v0 = -1;                                                    // 0x001dc4d0: addiu $v0, $zero, -1
label_0x1dc4d4:
    if (s2 == 0) v0 = 0;                                        // 0x001dc4d8: movz $v0, $zero, $s2
    return;                                                     // 0x001dc4e8: jr $ra
    sp = sp + 0x40;                                             // 0x001dc4ec: addiu $sp, $sp, 0x40
}