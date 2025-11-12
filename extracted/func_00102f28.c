void func_00102f28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00102f28: addiu $sp, $sp, -0x40
    s1 = 0x100 << 16;                                           // 0x00102f34: lui $s1, 0x100
    v0 = *(int32_t*)(s0);                                       // 0x00102f44: lw $v0, 0($s0)
    v0 = v0 & 0x100;                                            // 0x00102f48: andi $v0, $v0, 0x100
    if (v0 == 0) goto label_0x102f80;                           // 0x00102f4c: beqz $v0, 0x102f80
    s2 = 0x22 << 16;                                            // 0x00102f50: lui $s2, 0x22
    s1 = s1 + -1;                                               // 0x00102f54: addiu $s1, $s1, -1
label_0x102f58:
    if (s1 >= 0) goto label_0x102f70;                           // 0x00102f58: bgez $s1, 0x102f70
    /* nop */                                                   // 0x00102f5c: nop 
    func_00116598();  // 0x116508                                // 0x00102f60: jal 0x116508
    a0 = &str_0021ff78;  // "Infinity"                          // 0x00102f64: addiu $a0, $s2, -0x88
    func_00103770();  // 0x1036c0                                // 0x00102f68: jal 0x1036c0
label_0x102f70:
    v0 = *(int32_t*)(s0);                                       // 0x00102f70: lw $v0, 0($s0)
    v0 = v0 & 0x100;                                            // 0x00102f74: andi $v0, $v0, 0x100
    if (v0 != 0) goto label_0x102f58;                           // 0x00102f78: bnez $v0, 0x102f58
    s1 = s1 + -1;                                               // 0x00102f7c: addiu $s1, $s1, -1
label_0x102f80:
    return;                                                     // 0x00102f90: jr $ra
    sp = sp + 0x40;                                             // 0x00102f94: addiu $sp, $sp, 0x40
}