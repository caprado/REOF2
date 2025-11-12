void func_001737e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001737e8: addiu $sp, $sp, -0x10
    func_00169b10();  // 0x169af0                                // 0x001737f4: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x001737fc: lui $a1, 0xff00
    if (v0 == 0) goto label_0x173820;                           // 0x00173804: beqz $v0, 0x173820
    a1 = a1 | 0x133;                                            // 0x00173808: ori $a1, $a1, 0x133
    return func_00169940();  // Tail call                        // 0x00173818: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0017381c: addiu $sp, $sp, 0x10
label_0x173820:
    func_001738b0();  // 0x173840                                // 0x00173820: jal 0x173840
    /* nop */                                                   // 0x00173824: nop 
    v1 = 1;                                                     // 0x00173828: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x44) = v1;                             // 0x0017382c: sw $v1, 0x44($s0)
    return;                                                     // 0x00173838: jr $ra
    sp = sp + 0x10;                                             // 0x0017383c: addiu $sp, $sp, 0x10
}