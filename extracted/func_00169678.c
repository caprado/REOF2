void func_00169678() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x78);                              // 0x00169678: lw $v1, 0x78($a0)
    a0 = a0 + 0xd4;                                             // 0x0016967c: addiu $a0, $a0, 0xd4
    if (v1 == 0) goto label_0x169694;                           // 0x00169680: beqz $v1, 0x169694
    v0 = -1;                                                    // 0x00169684: addiu $v0, $zero, -1
    v1 = *(int32_t*)((a0) + 0x14);                              // 0x00169688: lw $v1, 0x14($a0)
    /* bnezl $v1, 0x169694 */                                   // 0x0016968c: bnezl $v1, 0x169694
    v0 = *(int32_t*)((a0) + 0x18);                              // 0x00169690: lw $v0, 0x18($a0)
label_0x169694:
    return;                                                     // 0x00169694: jr $ra
    /* nop */                                                   // 0x00169698: nop 
}