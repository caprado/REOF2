void func_001615a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001615a8: addiu $sp, $sp, -0x10
    func_00161580();  // 161580                                // 0x001615b8: jal 0x161580
    a0 = s0 + 0xc;                                              // 0x001615bc: addiu $a0, $s0, 0xc
    if (v0 == 0) goto label_0x1615f4;                           // 0x001615c0: beqz $v0, 0x1615f4
    a0 = *(int32_t*)((s0) + 0xec);                              // 0x001615c8: lw $a0, 0xec($s0)
    func_0013f568();  // 13f568                                // 0x001615cc: jal 0x13f568
    a1 = *(int32_t*)((s0) + 0xf0);                              // 0x001615d0: lw $a1, 0xf0($s0)
    a0 = 0x23 << 16;                                            // 0x001615d4: lui $a0, 0x23
    if (v0 != 0) goto label_0x1615f4;                           // 0x001615d8: bnez $v0, 0x1615f4
    a0 = &str_00228700;  // "CRITAGS"                           // 0x001615dc: addiu $a0, $a0, -0x7900
    func_00163410();  // 163410                                // 0x001615e0: jal 0x163410
    /* nop */                                                   // 0x001615e4: nop 
    func_0015ce90();  // 15ce90                                // 0x001615e8: jal 0x15ce90
label_0x1615f4:
    return;                                                     // 0x001615fc: jr $ra
    sp = sp + 0x10;                                             // 0x00161600: addiu $sp, $sp, 0x10
}