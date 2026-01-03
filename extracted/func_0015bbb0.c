void func_0015bbb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015bbb0: addiu $sp, $sp, -0x20
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x0015bbc4: lw $a1, 0xc($s0)
    func_00160818();  // 160818                                // 0x0015bbc8: jal 0x160818
    a0 = *(int32_t*)((s0) + 8);                                 // 0x0015bbcc: lw $a0, 8($s0)
    func_00161580();  // 161580                                // 0x0015bbd4: jal 0x161580
    v1 = 1;                                                     // 0x0015bbdc: addiu $v1, $zero, 1
    a0 = 2 << 16;                                               // 0x0015bbe0: lui $a0, 2
    a0 = a0 + s1;                                               // 0x0015bbe4: addu $a0, $a0, $s1
    v0 = v0 ^ v1;                                               // 0x0015bbe8: xor $v0, $v0, $v1
    if (v0 == 0) s1 = a0;                                       // 0x0015bbf0: movz $s1, $a0, $v0
    return;                                                     // 0x0015bc00: jr $ra
    sp = sp + 0x20;                                             // 0x0015bc04: addiu $sp, $sp, 0x20
}