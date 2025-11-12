void func_0011b4e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011b4e8: addiu $sp, $sp, -0x30
    s1 = 0x25 << 16;                                            // 0x0011b4f4: lui $s1, 0x25
    goto label_0x11b524;                                        // 0x0011b4f8: b 0x11b524
label_0x11b500:
    v0 = 0x10 << 16;                                            // 0x0011b500: lui $v0, 0x10
    v1 = -1;                                                    // 0x0011b504: addiu $v1, $zero, -1
label_0x11b508:
    v0 = v0 + -1;                                               // 0x0011b508: addiu $v0, $v0, -1
    /* nop */                                                   // 0x0011b50c: nop 
    /* nop */                                                   // 0x0011b510: nop 
    /* nop */                                                   // 0x0011b514: nop 
    /* nop */                                                   // 0x0011b518: nop 
    if (v0 != v1) goto label_0x11b508;                          // 0x0011b51c: bne $v0, $v1, 0x11b508
    /* nop */                                                   // 0x0011b520: nop 
label_0x11b524:
    s0 = s1 + -0x640;                                           // 0x0011b524: addiu $s0, $s1, -0x640
    a1 = 0x8000 << 16;                                          // 0x0011b528: lui $a1, 0x8000
    a1 = a1 | 3;                                                // 0x0011b530: ori $a1, $a1, 3
    func_001176a8();  // 0x1174d8                                // 0x0011b534: jal 0x1174d8
    if (v0 >= 0) goto label_0x11b54c;                           // 0x0011b53c: bgezl $v0, 0x11b54c
    v0 = g_0024f9e4;  // Global at 0x0024f9e4                   // 0x0011b540: lw $v0, 0x24($s0)
    goto label_0x11b55c;                                        // 0x0011b544: b 0x11b55c
    v0 = -1;                                                    // 0x0011b548: addiu $v0, $zero, -1
label_0x11b54c:
    if (v0 == 0) goto label_0x11b500;                           // 0x0011b54c: beqz $v0, 0x11b500
    v0 = 0x1f << 16;                                            // 0x0011b550: lui $v0, 0x1f
    g_001f03f8 = 0;  // Global at 0x001f03f8                    // 0x0011b554: sw $zero, 0x3f8($v0)
label_0x11b55c:
    return;                                                     // 0x0011b568: jr $ra
    sp = sp + 0x30;                                             // 0x0011b56c: addiu $sp, $sp, 0x30
}