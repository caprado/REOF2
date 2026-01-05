void func_0012d97c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012d97c: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((v0) + -0x12b8);                           // 0x0012d980: lw $v1, -0x12b8($v0)
    if (v1 != 0) goto label_0x12d9ac;                           // 0x0012d99c: bnez $v1, 0x12d9ac
    func_0012d780();  // 12d780                                // 0x0012d9a4: jal 0x12d780
    /* nop */                                                   // 0x0012d9a8: nop 
label_0x12d9ac:
    a0 = 0x22 << 16;                                            // 0x0012d9ac: lui $a0, 0x22
    a0 = &str_00223618;  // "\nADXENC/PS2EE Ver.1.08 Build:Jul 28 2003 17:49:56\n" // 0x0012d9bc: addiu $a0, $a0, 0x3618
    func_0012d7c0();  // 12d7c0                                // 0x0012d9c0: jal 0x12d7c0
    a1 = 6;                                                     // 0x0012d9c4: addiu $a1, $zero, 6
    return;                                                     // 0x0012d9dc: jr $ra
    sp = sp + 0x20;                                             // 0x0012d9e0: addiu $sp, $sp, 0x20
}