void func_00179fc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179fc8: addiu $sp, $sp, -0x20
    s0 = a1 & 0xff;                                             // 0x00179fd0: andi $s0, $a1, 0xff
    func_00179a70();  // 0x179a18                                // 0x00179fe4: jal 0x179a18
    if (s1 == 0) goto label_0x17a018;                           // 0x00179ff4: beqz $s1, 0x17a018
    func_0017a298();  // 0x17a258                                // 0x00179ffc: jal 0x17a258
    /* nop */                                                   // 0x0017a000: nop 
    if (v0 == 0) goto label_0x17a01c;                           // 0x0017a004: beqz $v0, 0x17a01c
    v1 = *(uint8_t*)((s1) + 0x24);                              // 0x0017a00c: lbu $v1, 0x24($s1)
    v0 = 1;                                                     // 0x0017a010: addiu $v0, $zero, 1
    *(uint32_t*)(s2) = v1;                                      // 0x0017a014: sw $v1, 0($s2)
label_0x17a018:
label_0x17a01c:
    return;                                                     // 0x0017a028: jr $ra
    sp = sp + 0x20;                                             // 0x0017a02c: addiu $sp, $sp, 0x20
}