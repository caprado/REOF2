void func_001707a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4, local_8;
    
    v0 = 0xfff << 16;                                           // 0x001707a8: lui $v0, 0xfff
    sp = sp + -0x30;                                            // 0x001707ac: addiu $sp, $sp, -0x30
    v0 = v0 | 0xffff;                                           // 0x001707b0: ori $v0, $v0, 0xffff
    v1 = 0x2000 << 16;                                          // 0x001707b4: lui $v1, 0x2000
    a2 = a2 & v0;                                               // 0x001707b8: and $a2, $a2, $v0
    v0 = 1;                                                     // 0x001707bc: addiu $v0, $zero, 1
    a2 = a2 | v1;                                               // 0x001707c8: or $a2, $a2, $v1
    t2 = a3 << 0xb;                                             // 0x001707cc: sll $t2, $a3, 0xb
    *(uint32_t*)((s0) + 0x54) = t1;                             // 0x001707d8: sw $t1, 0x54($s0)
    *(uint32_t*)((s0) + 0x18) = t2;                             // 0x001707dc: sw $t2, 0x18($s0)
    *(uint32_t*)((s0) + 8) = a3;                                // 0x001707e0: sw $a3, 8($s0)
    *(uint32_t*)(s0) = a1;                                      // 0x001707e4: sw $a1, 0($s0)
    *(uint32_t*)((s0) + 0x50) = t0;                             // 0x001707e8: sw $t0, 0x50($s0)
    *(uint32_t*)((s0) + 4) = a2;                                // 0x001707ec: sw $a2, 4($s0)
    local_4 = v0;                                               // 0x001707f0: sw $v0, 4($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001707f4: jal 0x1142e0
    local_8 = v0;                                               // 0x001707f8: sw $v0, 8($sp)
    *(uint32_t*)((s0) + 0x40) = v0;                             // 0x001707fc: sw $v0, 0x40($s0)
    func_00170820();  // 170820                                // 0x00170800: jal 0x170820
    v0 = 1;                                                     // 0x00170810: addiu $v0, $zero, 1
    return;                                                     // 0x00170818: jr $ra
    sp = sp + 0x30;                                             // 0x0017081c: addiu $sp, $sp, 0x30
}