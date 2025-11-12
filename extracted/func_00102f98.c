void func_00102f98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00102f98: addiu $sp, $sp, -0x50
    s0 = 0x100 << 16;                                           // 0x00102fb4: lui $s0, 0x100
    if (a2 != 0) s0 = a2;                                       // 0x00102fbc: movn $s0, $a2, $a2
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x00102fc0: lw $v0, 0x10($s1)
    v0 = ((unsigned)v0 < (unsigned)s2) ? 1 : 0;                 // 0x00102fc4: sltu $v0, $v0, $s2
    if (v0 == 0) goto label_0x103000;                           // 0x00102fc8: beqz $v0, 0x103000
    s3 = 0x22 << 16;                                            // 0x00102fcc: lui $s3, 0x22
    s0 = s0 + -1;                                               // 0x00102fd0: addiu $s0, $s0, -1
    /* nop */                                                   // 0x00102fd4: nop 
label_0x102fd8:
    if (s0 >= 0) goto label_0x102ff0;                           // 0x00102fd8: bgez $s0, 0x102ff0
    /* nop */                                                   // 0x00102fdc: nop 
    func_00116598();  // 0x116508                                // 0x00102fe0: jal 0x116508
    a0 = &str_0021ff78;  // "Infinity"                          // 0x00102fe4: addiu $a0, $s3, -0x88
    func_00103770();  // 0x1036c0                                // 0x00102fe8: jal 0x1036c0
label_0x102ff0:
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x00102ff0: lw $v0, 0x10($s1)
    v0 = ((unsigned)v0 < (unsigned)s2) ? 1 : 0;                 // 0x00102ff4: sltu $v0, $v0, $s2
    if (v0 != 0) goto label_0x102fd8;                           // 0x00102ff8: bnez $v0, 0x102fd8
    s0 = s0 + -1;                                               // 0x00102ffc: addiu $s0, $s0, -1
label_0x103000:
    return;                                                     // 0x00103014: jr $ra
    sp = sp + 0x50;                                             // 0x00103018: addiu $sp, $sp, 0x50
}