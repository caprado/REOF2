void func_001a2740() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a2740: addiu $sp, $sp, -0x10
    func_001a28c0();  // 1a28c0                                // 0x001a2748: jal 0x1a28c0
    /* nop */                                                   // 0x001a274c: nop 
    a0 = *(int32_t*)((v0) + 4);                                 // 0x001a2750: lw $a0, 4($v0)
    v1 = 0x8000 << 16;                                          // 0x001a2754: lui $v1, 0x8000
    v0 = *(int32_t*)(v0);                                       // 0x001a2758: lw $v0, 0($v0)
    v0 = v0 & v1;                                               // 0x001a275c: and $v0, $v0, $v1
    if (v0 == 0) goto label_0x1a276c;                           // 0x001a2760: beqz $v0, 0x1a276c
    /* nop */                                                   // 0x001a2764: nop 
    a0 = a0 + -1;                                               // 0x001a2768: addiu $a0, $a0, -1
label_0x1a276c:
    return;                                                     // 0x001a2774: jr $ra
    sp = sp + 0x10;                                             // 0x001a2778: addiu $sp, $sp, 0x10
}