void func_00179c90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179c90: addiu $sp, $sp, -0x20
    s0 = a1 & 0xff;                                             // 0x00179c98: andi $s0, $a1, 0xff
    func_00179a18();  // 179a18                                // 0x00179cac: jal 0x179a18
    if (s1 == 0) goto label_0x179ce8;                           // 0x00179cb8: beqz $s1, 0x179ce8
    func_0017a298();  // 17a298                                // 0x00179cc0: jal 0x17a298
    /* nop */                                                   // 0x00179cc4: nop 
    v1 = 0xe0;                                                  // 0x00179cc8: addiu $v1, $zero, 0xe0
    if (v0 != v1) goto label_0x179ce8;                          // 0x00179ccc: bne $v0, $v1, 0x179ce8
    v1 = *(uint16_t*)((s1) + 0x1a);                             // 0x00179cd4: lhu $v1, 0x1a($s1)
    v0 = 1;                                                     // 0x00179cd8: addiu $v0, $zero, 1
    a0 = v1 ^ 0xffff;                                           // 0x00179cdc: xori $a0, $v1, 0xffff
    if (a0 == 0) v1 = 0;                                        // 0x00179ce0: movz $v1, $zero, $a0
    *(uint32_t*)(s2) = v1;                                      // 0x00179ce4: sw $v1, 0($s2)
label_0x179ce8:
    return;                                                     // 0x00179cf8: jr $ra
    sp = sp + 0x20;                                             // 0x00179cfc: addiu $sp, $sp, 0x20
}