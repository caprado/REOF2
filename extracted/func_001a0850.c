void func_001a0850() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a0850: addiu $sp, $sp, -0x10
    v1 = a0 & 0xff;                                             // 0x001a0854: andi $v1, $a0, 0xff
    v0 = 1;                                                     // 0x001a0858: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1a0884;                          // 0x001a085c: beq $v1, $v0, 0x1a0884
    if (v1 == 0) goto label_0x1a0874;                           // 0x001a0864: beqz $v1, 0x1a0874
    v0 = 3 << 16;                                               // 0x001a0868: lui $v0, 3
    goto label_0x1a0898;                                        // 0x001a086c: b 0x1a0898
label_0x1a0874:
    at = 0x21 << 16;                                            // 0x001a0874: lui $at, 0x21
    v0 = v0 | 0x200f;                                           // 0x001a0878: ori $v0, $v0, 0x200f
    goto label_0x1a08a0;                                        // 0x001a087c: b 0x1a08a0
label_0x1a0884:
    v0 = 3 << 16;                                               // 0x001a0884: lui $v0, 3
    at = 0x21 << 16;                                            // 0x001a0888: lui $at, 0x21
    v0 = v0 | 3;                                                // 0x001a088c: ori $v0, $v0, 3
    goto label_0x1a08a0;                                        // 0x001a0890: b 0x1a08a0
label_0x1a0898:
    goto label_0x1a094c;                                        // 0x001a0898: b 0x1a094c
label_0x1a08a0:
    at = 0x29 << 16;                                            // 0x001a08a0: lui $at, 0x29
    v1 = (unsigned)a1 >> 0x10;                                  // 0x001a08a4: srl $v1, $a1, 0x10
    t1 = g_00290318;  // Global at 0x00290318                   // 0x001a08a8: lw $t1, 0x318($at)
    v0 = (unsigned)a1 >> 8;                                     // 0x001a08ac: srl $v0, $a1, 8
    a0 = v1 & 0xff;                                             // 0x001a08b0: andi $a0, $v1, 0xff
    v0 = v0 & 0xff;                                             // 0x001a08b4: andi $v0, $v0, 0xff
    v0 = a1 & 0xff;                                             // 0x001a08bc: andi $v0, $a1, 0xff
    v1 = a0 | v1;                                               // 0x001a08c0: or $v1, $a0, $v1
    a0 = 0x21 << 16;                                            // 0x001a08c8: lui $a0, 0x21
    v1 = v0 | v1;                                               // 0x001a08cc: or $v1, $v0, $v1
    a1 = *(int32_t*)((gp) + -0x6448);                           // 0x001a08d0: lw $a1, -0x6448($gp)
    at = 0x29 << 16;                                            // 0x001a08d4: lui $at, 0x29
    v0 = 1;                                                     // 0x001a08d8: addiu $v0, $zero, 1
    t0 = g_00290314;  // Global at 0x00290314                   // 0x001a08dc: lw $t0, 0x314($at)
    v0 = v1 | v0;                                               // 0x001a08e4: or $v0, $v1, $v0
    a2 = t1 << 4;                                               // 0x001a08e8: sll $a2, $t1, 4
    v1 = *(int32_t*)((gp) + -0x644c);                           // 0x001a08ec: lw $v1, -0x644c($gp)
    a0 = a0 + 0x75a0;                                           // 0x001a08f4: addiu $a0, $a0, 0x75a0
    at = 0x21 << 16;                                            // 0x001a08f8: lui $at, 0x21
    a3 = t0 << 4;                                               // 0x001a08fc: sll $a3, $t0, 4
    a1 = t0 + a1;                                               // 0x001a0904: addu $a1, $t0, $a1
    at = 0x29 << 16;                                            // 0x001a0908: lui $at, 0x29
    a2 = a3 | a2;                                               // 0x001a090c: or $a2, $a3, $a2
    v1 = t1 + v1;                                               // 0x001a0914: addu $v1, $t1, $v1
    a1 = a1 << 4;                                               // 0x001a0918: sll $a1, $a1, 4
    at = 0x21 << 16;                                            // 0x001a091c: lui $at, 0x21
    at = 0x21 << 16;                                            // 0x001a0924: lui $at, 0x21
    v0 = v1 << 4;                                               // 0x001a092c: sll $v0, $v1, 4
    at = 0x21 << 16;                                            // 0x001a0930: lui $at, 0x21
    v0 = a1 | v0;                                               // 0x001a0938: or $v0, $a1, $v0
    func_00193e90();  // 193e90                                // 0x001a093c: jal 0x193e90
label_0x1a094c:
    return;                                                     // 0x001a094c: jr $ra
    sp = sp + 0x10;                                             // 0x001a0950: addiu $sp, $sp, 0x10
}