void func_001a5ad0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t1 = a0 << 3;                                               // 0x001a5ad0: sll $t1, $a0, 3
    v1 = gp + -0x63fe;                                          // 0x001a5ad4: addiu $v1, $gp, -0x63fe
    a0 = gp + -0x6400;                                          // 0x001a5ad8: addiu $a0, $gp, -0x6400
    t0 = a0 + t1;                                               // 0x001a5adc: addu $t0, $a0, $t1
    t0 = *(int16_t*)(t0);                                       // 0x001a5ae0: lh $t0, 0($t0)
    a0 = v1 + t1;                                               // 0x001a5ae4: addu $a0, $v1, $t1
    v1 = gp + -0x63fc;                                          // 0x001a5ae8: addiu $v1, $gp, -0x63fc
    v1 = v1 + t1;                                               // 0x001a5aec: addu $v1, $v1, $t1
    *(uint16_t*)(a1) = t0;                                      // 0x001a5af0: sh $t0, 0($a1)
    a0 = *(int16_t*)(a0);                                       // 0x001a5af4: lh $a0, 0($a0)
    *(uint16_t*)(a2) = a0;                                      // 0x001a5af8: sh $a0, 0($a2)
    v1 = *(int16_t*)(v1);                                       // 0x001a5afc: lh $v1, 0($v1)
    return;                                                     // 0x001a5b00: jr $ra
    *(uint16_t*)(a3) = v1;                                      // 0x001a5b04: sh $v1, 0($a3)
}