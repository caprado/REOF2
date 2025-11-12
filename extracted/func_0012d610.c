void func_0012d610() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012d610: addiu $sp, $sp, -0x20
    func_00124c10();  // 0x124c08                                // 0x0012d628: jal 0x124c08
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012d62c: lw $a0, 4($s0)
    if (v0 <= 0) goto label_0x12d660;                           // 0x0012d630: blez $v0, 0x12d660
    v0 = -0x80;                                                 // 0x0012d634: addiu $v0, $zero, -0x80
    v0 = *(uint8_t*)((s0) + 1);                                 // 0x0012d638: lbu $v0, 1($s0)
    v0 = v0 + -2;                                               // 0x0012d63c: addiu $v0, $v0, -2
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0012d640: sltiu $v0, $v0, 2
    /* beqzl $v0, 0x12d660 */                                   // 0x0012d644: beqzl $v0, 0x12d660
    v0 = -0x80;                                                 // 0x0012d648: addiu $v0, $zero, -0x80
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012d64c: lw $a0, 4($s0)
    func_00124c30();  // 0x124c18                                // 0x0012d650: jal 0x124c18
    goto label_0x12d664;                                        // 0x0012d658: b 0x12d664
label_0x12d660:
label_0x12d664:
    return;                                                     // 0x0012d66c: jr $ra
    sp = sp + 0x20;                                             // 0x0012d670: addiu $sp, $sp, 0x20
}