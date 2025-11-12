void func_00179bc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179bc0: addiu $sp, $sp, -0x20
    s0 = a1 & 0xff;                                             // 0x00179bc8: andi $s0, $a1, 0xff
    func_00179a70();  // 0x179a18                                // 0x00179bdc: jal 0x179a18
    if (s1 == 0) goto label_0x179c10;                           // 0x00179be8: beqz $s1, 0x179c10
    func_0017a2e0();  // 0x17a298                                // 0x00179bf0: jal 0x17a298
    /* nop */                                                   // 0x00179bf4: nop 
    v1 = 0xc0;                                                  // 0x00179bf8: addiu $v1, $zero, 0xc0
    if (v0 != v1) goto label_0x179c10;                          // 0x00179bfc: bne $v0, $v1, 0x179c10
    v1 = *(int32_t*)((s1) + 0x1c);                              // 0x00179c04: lw $v1, 0x1c($s1)
    v0 = 1;                                                     // 0x00179c08: addiu $v0, $zero, 1
    *(uint32_t*)(s2) = v1;                                      // 0x00179c0c: sw $v1, 0($s2)
label_0x179c10:
    return;                                                     // 0x00179c20: jr $ra
    sp = sp + 0x20;                                             // 0x00179c24: addiu $sp, $sp, 0x20
}