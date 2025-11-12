void func_00179b58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179b58: addiu $sp, $sp, -0x20
    s0 = a1 & 0xff;                                             // 0x00179b60: andi $s0, $a1, 0xff
    func_00179a70();  // 0x179a18                                // 0x00179b74: jal 0x179a18
    if (s1 == 0) goto label_0x179ba8;                           // 0x00179b80: beqz $s1, 0x179ba8
    func_0017a2e0();  // 0x17a298                                // 0x00179b88: jal 0x17a298
    /* nop */                                                   // 0x00179b8c: nop 
    v1 = 0xc0;                                                  // 0x00179b90: addiu $v1, $zero, 0xc0
    if (v0 != v1) goto label_0x179ba8;                          // 0x00179b94: bne $v0, $v1, 0x179ba8
    v1 = *(uint8_t*)((s1) + 0x1b);                              // 0x00179b9c: lbu $v1, 0x1b($s1)
    v0 = 1;                                                     // 0x00179ba0: addiu $v0, $zero, 1
    *(uint32_t*)(s2) = v1;                                      // 0x00179ba4: sw $v1, 0($s2)
label_0x179ba8:
    return;                                                     // 0x00179bb8: jr $ra
    sp = sp + 0x20;                                             // 0x00179bbc: addiu $sp, $sp, 0x20
}