void func_001af2f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = *(int32_t*)((gp) + -0x63b4);                           // 0x001af2f0: lw $a3, -0x63b4($gp)
    a1 = 0x2b << 16;                                            // 0x001af2f4: lui $a1, 0x2b
    goto label_0x1af320;                                        // 0x001af2fc: b 0x1af320
    a1 = a1 + -0x5770;                                          // 0x001af300: addiu $a1, $a1, -0x5770
label_0x1af304:
    a2 = a1 + v1;                                               // 0x001af304: addu $a2, $a1, $v1
    v1 = *(int32_t*)(a2);                                       // 0x001af308: lw $v1, 0($a2)
    if (v1 != a0) goto label_0x1af31c;                          // 0x001af30c: bne $v1, $a0, 0x1af31c
    /* nop */                                                   // 0x001af310: nop 
    goto label_0x1af32c;                                        // 0x001af314: b 0x1af32c
    *(uint32_t*)(a2) = 0;                                       // 0x001af318: sw $zero, 0($a2)
label_0x1af31c:
    t0 = t0 + 1;                                                // 0x001af31c: addiu $t0, $t0, 1
label_0x1af320:
    v1 = (t0 < a3) ? 1 : 0;                                     // 0x001af320: slt $v1, $t0, $a3
    if (v1 != 0) goto label_0x1af304;                           // 0x001af324: bnez $v1, 0x1af304
    v1 = t0 << 2;                                               // 0x001af328: sll $v1, $t0, 2
label_0x1af32c:
    v1 = (t0 < a3) ? 1 : 0;                                     // 0x001af32c: slt $v1, $t0, $a3
    if (v1 != 0) goto label_0x1af380;                           // 0x001af330: bnez $v1, 0x1af380
    a1 = 0x2b << 16;                                            // 0x001af334: lui $a1, 0x2b
    goto label_0x1af38c;                                        // 0x001af338: b 0x1af38c
    /* nop */                                                   // 0x001af33c: nop 
label_0x1af340:
    a2 = a1 + v1;                                               // 0x001af340: addu $a2, $a1, $v1
    t0 = t0 + 1;                                                // 0x001af344: addiu $t0, $t0, 1
    v1 = *(int32_t*)((a2) + 4);                                 // 0x001af348: lw $v1, 4($a2)
    *(uint32_t*)(a2) = v1;                                      // 0x001af34c: sw $v1, 0($a2)
label_0x1af350:
    v1 = (t0 < a0) ? 1 : 0;                                     // 0x001af350: slt $v1, $t0, $a0
    if (v1 != 0) goto label_0x1af340;                           // 0x001af354: bnez $v1, 0x1af340
    v1 = t0 << 2;                                               // 0x001af358: sll $v1, $t0, 2
    v1 = 0x2b << 16;                                            // 0x001af35c: lui $v1, 0x2b
    a0 = t0 << 2;                                               // 0x001af360: sll $a0, $t0, 2
    v1 = v1 + -0x5770;                                          // 0x001af364: addiu $v1, $v1, -0x5770
    v1 = v1 + a0;                                               // 0x001af368: addu $v1, $v1, $a0
    g_002aa890 = 0;  // Global at 0x002aa890                    // 0x001af36c: sw $zero, 0($v1)
    v1 = *(int32_t*)((gp) + -0x63b4);                           // 0x001af370: lw $v1, -0x63b4($gp)
    v1 = v1 + -1;                                               // 0x001af374: addiu $v1, $v1, -1
    goto label_0x1af38c;                                        // 0x001af378: b 0x1af38c
    *(uint32_t*)((gp) + -0x63b4) = v1;                          // 0x001af37c: sw $v1, -0x63b4($gp)
label_0x1af380:
    a0 = a3 + -1;                                               // 0x001af380: addiu $a0, $a3, -1
    goto label_0x1af350;                                        // 0x001af384: b 0x1af350
    a1 = a1 + -0x5770;                                          // 0x001af388: addiu $a1, $a1, -0x5770
label_0x1af38c:
    return;                                                     // 0x001af38c: jr $ra
    /* nop */                                                   // 0x001af390: nop 
}