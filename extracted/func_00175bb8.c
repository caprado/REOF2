void func_00175bb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a1) + 0x288);                             // 0x00175bb8: lw $v1, 0x288($a1)
    a2 = -1;                                                    // 0x00175bbc: addiu $a2, $zero, -1
    if (v1 == a2) goto label_0x175bd4;                          // 0x00175bc0: beq $v1, $a2, 0x175bd4
    v0 = *(int32_t*)((a0) + 0x4c);                              // 0x00175bc8: lw $v0, 0x4c($a0)
    v0 = v0 ^ 4;                                                // 0x00175bcc: xori $v0, $v0, 4
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00175bd0: sltiu $v0, $v0, 1
label_0x175bd4:
    return;                                                     // 0x00175bd4: jr $ra
    /* nop */                                                   // 0x00175bd8: nop 
}