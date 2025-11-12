void func_00175a18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = *(int32_t*)((a0) + 0x250);                             // 0x00175a1c: lw $a1, 0x250($a0)
    v0 = *(int32_t*)((a0) + 0x254);                             // 0x00175a20: lw $v0, 0x254($a0)
    v1 = *(int32_t*)((a0) + 0x258);                             // 0x00175a24: lw $v1, 0x258($a0)
    v0 = a1 + v0;                                               // 0x00175a28: addu $v0, $a1, $v0
    a0 = (a2 < v0) ? 1 : 0;                                     // 0x00175a2c: slt $a0, $a2, $v0
    a1 = a1 + v1;                                               // 0x00175a30: addu $a1, $a1, $v1
    if (a0 != 0) goto label_0x175a4c;                           // 0x00175a34: bnez $a0, 0x175a4c
    v1 = 0x7fff << 16;                                          // 0x00175a3c: lui $v1, 0x7fff
    v0 = (a2 < a1) ? 1 : 0;                                     // 0x00175a40: slt $v0, $a2, $a1
    v1 = v1 | 0xffff;                                           // 0x00175a44: ori $v1, $v1, 0xffff
    if (v0 != 0) v1 = a1;                                       // 0x00175a48: movn $v1, $a1, $v0
label_0x175a4c:
    return;                                                     // 0x00175a4c: jr $ra
}