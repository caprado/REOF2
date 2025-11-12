void func_00179e18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179e18: addiu $sp, $sp, -0x20
    s0 = a1 & 0xff;                                             // 0x00179e20: andi $s0, $a1, 0xff
    func_00179a70();  // 0x179a18                                // 0x00179e34: jal 0x179a18
    if (s1 == 0) goto label_0x179e68;                           // 0x00179e44: beqz $s1, 0x179e68
    func_0017a298();  // 0x17a258                                // 0x00179e4c: jal 0x17a258
    /* nop */                                                   // 0x00179e50: nop 
    if (v0 == 0) goto label_0x179e6c;                           // 0x00179e54: beqz $v0, 0x179e6c
    v1 = *(uint8_t*)((s1) + 0x21);                              // 0x00179e5c: lbu $v1, 0x21($s1)
    v0 = 1;                                                     // 0x00179e60: addiu $v0, $zero, 1
    *(uint32_t*)(s2) = v1;                                      // 0x00179e64: sw $v1, 0($s2)
label_0x179e68:
label_0x179e6c:
    return;                                                     // 0x00179e78: jr $ra
    sp = sp + 0x20;                                             // 0x00179e7c: addiu $sp, $sp, 0x20
}