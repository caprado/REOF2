void func_00198870() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = *(int16_t*)((a0) + 0x1a);                              // 0x00198870: lh $a3, 0x1a($a0)
    v1 = *(uint16_t*)(a1);                                      // 0x00198874: lhu $v1, 0($a1)
    at = (a3 < v1) ? 1 : 0;                                     // 0x00198878: slt $at, $a3, $v1
    if (at == 0) goto label_0x198888;                           // 0x0019887c: beqz $at, 0x198888
    /* nop */                                                   // 0x00198880: nop 
    *(uint16_t*)(a1) = a3;                                      // 0x00198884: sh $a3, 0($a1)
label_0x198888:
    a0 = *(int16_t*)((a0) + 0x1c);                              // 0x00198888: lh $a0, 0x1c($a0)
    v1 = *(uint16_t*)(a2);                                      // 0x0019888c: lhu $v1, 0($a2)
    at = (a0 < v1) ? 1 : 0;                                     // 0x00198890: slt $at, $a0, $v1
    if (at == 0) goto label_0x1988a0;                           // 0x00198894: beqz $at, 0x1988a0
    /* nop */                                                   // 0x00198898: nop 
    *(uint16_t*)(a2) = a0;                                      // 0x0019889c: sh $a0, 0($a2)
label_0x1988a0:
    return;                                                     // 0x001988a0: jr $ra
    /* nop */                                                   // 0x001988a4: nop 
}