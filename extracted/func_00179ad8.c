void func_00179ad8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179ad8: addiu $sp, $sp, -0x20
    s0 = a1 & 0xff;                                             // 0x00179ae0: andi $s0, $a1, 0xff
    func_00179a18();  // 179a18                                // 0x00179af4: jal 0x179a18
    if (s1 == 0) goto label_0x179b40;                           // 0x00179b00: beqz $s1, 0x179b40
    func_0017a298();  // 17a298                                // 0x00179b08: jal 0x17a298
    /* nop */                                                   // 0x00179b0c: nop 
    v1 = 0xc0;                                                  // 0x00179b10: addiu $v1, $zero, 0xc0
    if (v0 == v1) goto label_0x179b28;                          // 0x00179b14: beq $v0, $v1, 0x179b28
    a0 = 1;                                                     // 0x00179b18: addiu $a0, $zero, 1
    goto label_0x179b40;                                        // 0x00179b1c: b 0x179b40
    /* nop */                                                   // 0x00179b24: nop 
label_0x179b28:
    v1 = *(uint8_t*)((s1) + 0x19);                              // 0x00179b28: lbu $v1, 0x19($s1)
    if (v1 != a0) goto label_0x179b40;                          // 0x00179b2c: bne $v1, $a0, 0x179b40
    v1 = *(uint8_t*)((s1) + 0x1a);                              // 0x00179b34: lbu $v1, 0x1a($s1)
    v0 = 1;                                                     // 0x00179b38: addiu $v0, $zero, 1
    *(uint32_t*)(s2) = v1;                                      // 0x00179b3c: sw $v1, 0($s2)
label_0x179b40:
    return;                                                     // 0x00179b50: jr $ra
    sp = sp + 0x20;                                             // 0x00179b54: addiu $sp, $sp, 0x20
}