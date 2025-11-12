void func_00170640() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 == 0) goto label_0x170654;                           // 0x00170640: beqz $a0, 0x170654
    v0 = 1;                                                     // 0x00170644: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x00170648: lw $v1, 0xc($a0)
    v0 = *(int32_t*)((a1) + 0xc);                               // 0x0017064c: lw $v0, 0xc($a1)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00170650: slt $v0, $v0, $v1
label_0x170654:
    return;                                                     // 0x00170654: jr $ra
    /* nop */                                                   // 0x00170658: nop 
}