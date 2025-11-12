void func_001772a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001772a0: addiu $sp, $sp, -0x30
    s3 = *(int32_t*)(a2);                                       // 0x001772a8: lw $s3, 0($a2)
    s2 = 8;                                                     // 0x001772c4: addiu $s2, $zero, 8
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x001772d0: sw $zero, 8($s0)
    /* nop */                                                   // 0x001772d4: nop 
label_0x1772d8:
    s2 = s2 + -1;                                               // 0x001772dc: addiu $s2, $s2, -1
    s0 = s0 + 0x44;                                             // 0x001772e0: addiu $s0, $s0, 0x44
    a1 = *(int32_t*)(s1);                                       // 0x001772e4: lw $a1, 0($s1)
    func_001773a0();  // 0x177358                                // 0x001772e8: jal 0x177358
    s1 = s1 + 4;                                                // 0x001772ec: addiu $s1, $s1, 4
    if (s2 >= 0) goto label_0x1772d8;                           // 0x001772f0: bgezl $s2, 0x1772d8
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x001772f4: sw $zero, 8($s0)
    func_001774c0();  // 0x1773a0                                // 0x001772fc: jal 0x1773a0
    if (v0 == 0) goto label_0x177338;                           // 0x00177304: beqz $v0, 0x177338
    a1 = 0xff00 << 16;                                          // 0x00177310: lui $a1, 0xff00
    a1 = a1 | 0x302;                                            // 0x0017731c: ori $a1, $a1, 0x302
    return func_00169940();  // Tail call                        // 0x0017732c: j 0x1698d0
    sp = sp + 0x30;                                             // 0x00177330: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00177334: nop 
label_0x177338:
    return;                                                     // 0x00177350: jr $ra
    sp = sp + 0x30;                                             // 0x00177354: addiu $sp, $sp, 0x30
}