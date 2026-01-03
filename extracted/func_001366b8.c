void func_001366b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001366b8: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1366d8;                           // 0x001366bc: bnez $a0, 0x1366d8
    a0 = 0x22 << 16;                                            // 0x001366c4: lui $a0, 0x22
    func_00134ec0();  // 134ec0                                // 0x001366c8: jal 0x134ec0
    a0 = &str_00224920;  // "cvFsOptFn1 #1:handle error"        // 0x001366cc: addiu $a0, $a0, 0x4920
    goto label_0x136730;                                        // 0x001366d0: b 0x136730
label_0x1366d8:
    v0 = 0x25 << 16;                                            // 0x001366d8: lui $v0, 0x25
    a0 = str_00224920;  // "cvFsOptFn1 #1:handle error"         // 0x001366dc: lw $a0, 0($a0)
    v1 = v0 + 0x37e8;                                           // 0x001366e0: addiu $v1, $v0, 0x37e8
    v0 = g_002537e8;  // Global at 0x002537e8                   // 0x001366e8: lw $v0, 0($v1)
    if (v0 == a0) goto label_0x136724;                          // 0x001366ec: beq $v0, $a0, 0x136724
    a2 = a2 + 1;                                                // 0x001366f8: addiu $a2, $a2, 1
    /* nop */                                                   // 0x001366fc: nop 
label_0x136700:
    a1 = a2 << 4;                                               // 0x00136700: sll $a1, $a2, 4
    v0 = (a2 < 0x20) ? 1 : 0;                                   // 0x00136704: slti $v0, $a2, 0x20
    if (v0 == 0) goto label_0x136724;                           // 0x00136708: beqz $v0, 0x136724
    v1 = a1 + a3;                                               // 0x0013670c: addu $v1, $a1, $a3
    v0 = g_002537e8;  // Global at 0x002537e8                   // 0x00136710: lw $v0, 0($v1)
    /* nop */                                                   // 0x00136714: nop 
    /* nop */                                                   // 0x00136718: nop 
    if (v0 != a0) goto label_0x136700;                          // 0x0013671c: bnel $v0, $a0, 0x136700
    a2 = a2 + 1;                                                // 0x00136720: addiu $a2, $a2, 1
label_0x136724:
    v0 = 0x25 << 16;                                            // 0x00136724: lui $v0, 0x25
    v0 = v0 + 0x37ec;                                           // 0x00136728: addiu $v0, $v0, 0x37ec
    v0 = v0 + a1;                                               // 0x0013672c: addu $v0, $v0, $a1
label_0x136730:
    return;                                                     // 0x00136734: jr $ra
    sp = sp + 0x10;                                             // 0x00136738: addiu $sp, $sp, 0x10
}