void func_00166648() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00166648: addiu $sp, $sp, -0x10
    v1 = a2 - a3;                                               // 0x00166658: subu $v1, $a2, $a3
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00166668: sw $v0, 8($s0)
    *(uint32_t*)(s0) = 0;                                       // 0x00166674: sw $zero, 0($s0)
    if (v1 <= 0) goto label_0x166690;                           // 0x00166678: blez $v1, 0x166690
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x0016667c: sw $v1, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = a3;                             // 0x00166680: sw $a3, 0x10($s0)
    func_0013f568();  // 13f568                                // 0x00166684: jal 0x13f568
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00166688: sw $zero, 0x14($s0)
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0016668c: sw $v0, 4($s0)
label_0x166690:
    return;                                                     // 0x00166698: jr $ra
    sp = sp + 0x10;                                             // 0x0016669c: addiu $sp, $sp, 0x10
}