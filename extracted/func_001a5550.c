void func_001a5550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a5550: addiu $sp, $sp, -0x30
    func_001a56b0();  // 0x1a54d0                                // 0x001a5560: jal 0x1a54d0
    a2 = *(uint8_t*)((v0) + 0x11);                              // 0x001a5568: lbu $a2, 0x11($v0)
    at = (a2 < 2) ? 1 : 0;                                      // 0x001a5574: slti $at, $a2, 2
    if (at != 0) goto label_0x1a55c4;                           // 0x001a5578: bnez $at, 0x1a55c4
    a1 = 0x30;                                                  // 0x001a557c: addiu $a1, $zero, 0x30
    a3 = a2 + -1;                                               // 0x001a5584: addiu $a3, $a2, -1
    goto label_0x1a55a4;                                        // 0x001a5588: b 0x1a55a4
    a0 = t1 + 0x30;                                             // 0x001a558c: addiu $a0, $t1, 0x30
label_0x1a5590:
    v1 = a0 + v0;                                               // 0x001a5590: addu $v1, $a0, $v0
    t2 = t2 + 1;                                                // 0x001a5594: addiu $t2, $t2, 1
    v0 = v0 + sp;                                               // 0x001a5598: addu $v0, $v0, $sp
    v1 = v1 + 0x10;                                             // 0x001a559c: addiu $v1, $v1, 0x10
    *(uint32_t*)((v0) + 0x10) = v1;                             // 0x001a55a0: sw $v1, 0x10($v0)
label_0x1a55a4:
    v0 = (t2 < a3) ? 1 : 0;                                     // 0x001a55a4: slt $v0, $t2, $a3
    if (v0 != 0) goto label_0x1a5590;                           // 0x001a55a8: bnez $v0, 0x1a5590
    v0 = t2 << 2;                                               // 0x001a55ac: sll $v0, $t2, 2
    at = (a2 < 5) ? 1 : 0;                                      // 0x001a55b0: slti $at, $a2, 5
    if (at == 0) goto label_0x1a55c0;                           // 0x001a55b4: beqz $at, 0x1a55c0
    v0 = 0x30;                                                  // 0x001a55b8: addiu $v0, $zero, 0x30
    v0 = 0x20;                                                  // 0x001a55bc: addiu $v0, $zero, 0x20
label_0x1a55c0:
    a1 = a1 + v0;                                               // 0x001a55c0: addu $a1, $a1, $v0
label_0x1a55c4:
    func_001a54d0();  // 0x1a5460                                // 0x001a55c4: jal 0x1a5460
    t1 = t1 + v0;                                               // 0x001a55cc: addu $t1, $t1, $v0
    v0 = *(uint8_t*)((t0) + 0x11);                              // 0x001a55d0: lbu $v0, 0x11($t0)
    at = (v0 < 2) ? 1 : 0;                                      // 0x001a55d4: slti $at, $v0, 2
    if (at != 0) goto label_0x1a5614;                           // 0x001a55d8: bnez $at, 0x1a5614
    goto label_0x1a5604;                                        // 0x001a55e0: b 0x1a5604
label_0x1a55e8:
    v0 = v0 + sp;                                               // 0x001a55e8: addu $v0, $v0, $sp
    v0 = *(int32_t*)((v0) + 0x10);                              // 0x001a55ec: lw $v0, 0x10($v0)
    a1 = *(int32_t*)(v0);                                       // 0x001a55f0: lw $a1, 0($v0)
    func_001a54d0();  // 0x1a5460                                // 0x001a55f4: jal 0x1a5460
    a3 = a3 + v0;                                               // 0x001a55fc: addu $a3, $a3, $v0
    a2 = a2 + 1;                                                // 0x001a5600: addiu $a2, $a2, 1
label_0x1a5604:
    v0 = (a2 < t3) ? 1 : 0;                                     // 0x001a5604: slt $v0, $a2, $t3
    if (v0 != 0) goto label_0x1a55e8;                           // 0x001a5608: bnez $v0, 0x1a55e8
    v0 = a2 << 2;                                               // 0x001a560c: sll $v0, $a2, 2
    t1 = t1 + a3;                                               // 0x001a5610: addu $t1, $t1, $a3
label_0x1a5614:
    return;                                                     // 0x001a561c: jr $ra
    sp = sp + 0x30;                                             // 0x001a5620: addiu $sp, $sp, 0x30
}