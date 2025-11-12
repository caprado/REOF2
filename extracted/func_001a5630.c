void func_001a5630() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a5630: addiu $sp, $sp, -0x10
    func_001a56b0();  // 0x1a54d0                                // 0x001a563c: jal 0x1a54d0
    a1 = 0x30;                                                  // 0x001a5648: addiu $a1, $zero, 0x30
    v0 = *(uint8_t*)((v0) + 0x11);                              // 0x001a564c: lbu $v0, 0x11($v0)
    at = (v0 < 2) ? 1 : 0;                                      // 0x001a5650: slti $at, $v0, 2
    if (at != 0) goto label_0x1a5678;                           // 0x001a5654: bnez $at, 0x1a5678
    at = (v0 < 5) ? 1 : 0;                                      // 0x001a565c: slti $at, $v0, 5
    if (at == 0) goto label_0x1a5670;                           // 0x001a5660: beqz $at, 0x1a5670
    /* nop */                                                   // 0x001a5664: nop 
    goto label_0x1a5674;                                        // 0x001a5668: b 0x1a5674
    v0 = 0x20;                                                  // 0x001a566c: addiu $v0, $zero, 0x20
label_0x1a5670:
label_0x1a5674:
    a1 = a1 + v0;                                               // 0x001a5674: addu $a1, $a1, $v0
label_0x1a5678:
    func_001a54d0();  // 0x1a5460                                // 0x001a5678: jal 0x1a5460
    a3 = a3 + v0;                                               // 0x001a5680: addu $a3, $a3, $v0
    v0 = *(int32_t*)((a2) + 4);                                 // 0x001a5684: lw $v0, 4($a2)
    if (v0 == 0) goto label_0x1a569c;                           // 0x001a5688: beqz $v0, 0x1a569c
    /* nop */                                                   // 0x001a568c: nop 
    v0 = *(int32_t*)((a2) + 8);                                 // 0x001a5690: lw $v0, 8($a2)
    goto label_0x1a56a0;                                        // 0x001a5694: b 0x1a56a0
    v0 = a3 + v0;                                               // 0x001a5698: addu $v0, $a3, $v0
label_0x1a569c:
label_0x1a56a0:
    return;                                                     // 0x001a56a4: jr $ra
    sp = sp + 0x10;                                             // 0x001a56a8: addiu $sp, $sp, 0x10
}