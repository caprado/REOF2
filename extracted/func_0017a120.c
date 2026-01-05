void func_0017a120() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017a120: addiu $sp, $sp, -0x30
    s0 = a1 & 0xff;                                             // 0x0017a128: andi $s0, $a1, 0xff
    func_00179a18();  // 179a18                                // 0x0017a144: jal 0x179a18
    if (s1 == 0) goto label_0x17a188;                           // 0x0017a154: beqz $s1, 0x17a188
    func_0017a258();  // 17a258                                // 0x0017a15c: jal 0x17a258
    /* nop */                                                   // 0x0017a160: nop 
    if (v0 == 0) goto label_0x17a18c;                           // 0x0017a164: beqz $v0, 0x17a18c
    v1 = *(int32_t*)((s2) + 0xc);                               // 0x0017a16c: lw $v1, 0xc($s2)
    v1 = (v1 < 0xd2) ? 1 : 0;                                   // 0x0017a170: slti $v1, $v1, 0xd2
    if (v1 != 0) goto label_0x17a18c;                           // 0x0017a174: bnez $v1, 0x17a18c
    v1 = *(uint8_t*)((s1) + 0x27);                              // 0x0017a17c: lbu $v1, 0x27($s1)
    v0 = 1;                                                     // 0x0017a180: addiu $v0, $zero, 1
    *(uint32_t*)(s3) = v1;                                      // 0x0017a184: sw $v1, 0($s3)
label_0x17a188:
label_0x17a18c:
    return;                                                     // 0x0017a19c: jr $ra
    sp = sp + 0x30;                                             // 0x0017a1a0: addiu $sp, $sp, 0x30
}