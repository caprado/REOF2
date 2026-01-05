void func_00165748() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00165748: addiu $sp, $sp, -0x10
    func_001738c0();  // 1738c0                                // 0x00165754: jal 0x1738c0
    v1 = 1;                                                     // 0x0016575c: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x165780;                          // 0x00165760: beq $v0, $v1, 0x165780
    /* nop */                                                   // 0x00165764: nop 
    a2 = *(int32_t*)((s0) + 0x14);                              // 0x00165768: lw $a2, 0x14($s0)
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x0016576c: lw $a0, 0xc($s0)
    func_001312a0();  // 1312a0                                // 0x00165770: jal 0x1312a0
    a1 = *(int32_t*)((s0) + 0x18);                              // 0x00165774: lw $a1, 0x18($s0)
    goto label_0x16578c;                                        // 0x00165778: b 0x16578c
label_0x165780:
    func_001657b8();  // 1657b8                                // 0x00165780: jal 0x1657b8
    /* nop */                                                   // 0x00165784: nop 
label_0x16578c:
    if (s0 == 0) goto label_0x1657a4;                           // 0x0016578c: beqz $s0, 0x1657a4
    func_00132888();  // 132888                                // 0x00165798: jal 0x132888
label_0x1657a4:
    return;                                                     // 0x001657ac: jr $ra
    sp = sp + 0x10;                                             // 0x001657b0: addiu $sp, $sp, 0x10
}