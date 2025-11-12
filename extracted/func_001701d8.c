void func_001701d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x1b30);                            // 0x001701d8: lw $v0, 0x1b30($a0)
    a2 = *(int32_t*)((v0) + 0x138);                             // 0x001701e0: lw $a2, 0x138($v0)
    if (a2 <= 0) goto label_0x170214;                           // 0x001701e4: blez $a2, 0x170214
    v1 = v0 + 0x13c;                                            // 0x001701e8: addiu $v1, $v0, 0x13c
    a0 = a0 + 0x14e0;                                           // 0x001701ec: addiu $a0, $a0, 0x14e0
label_0x1701f0:
    if (v1 == a1) goto label_0x170218;                          // 0x001701f4: beq $v1, $a1, 0x170218
    a0 = a0 + 0x5c;                                             // 0x001701f8: addiu $a0, $a0, 0x5c
    a3 = a3 + 1;                                                // 0x001701fc: addiu $a3, $a3, 1
    v0 = (a3 < a2) ? 1 : 0;                                     // 0x00170200: slt $v0, $a3, $a2
    /* nop */                                                   // 0x00170204: nop 
    /* nop */                                                   // 0x00170208: nop 
    if (v0 != 0) goto label_0x1701f0;                           // 0x0017020c: bnez $v0, 0x1701f0
    v1 = v1 + 0x80;                                             // 0x00170210: addiu $v1, $v1, 0x80
label_0x170214:
label_0x170218:
    return;                                                     // 0x00170218: jr $ra
    /* nop */                                                   // 0x0017021c: nop 
}