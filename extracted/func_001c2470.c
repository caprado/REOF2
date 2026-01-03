void func_001c2470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c2470: addiu $sp, $sp, -0x10
    a0 = v1 + 1;                                                // 0x001c247c: addiu $a0, $v1, 1
    a1 = *(uint8_t*)(v1);                                       // 0x001c2480: lbu $a1, 0($v1)
    v1 = 0x43;                                                  // 0x001c2484: addiu $v1, $zero, 0x43
    if (a1 == v1) goto label_0x1c2498;                          // 0x001c2488: beq $a1, $v1, 0x1c2498
    /* nop */                                                   // 0x001c248c: nop 
    goto label_0x1c24dc;                                        // 0x001c2490: b 0x1c24dc
label_0x1c2498:
    v1 = *(uint8_t*)(a0);                                       // 0x001c2498: lbu $v1, 0($a0)
    if (v1 == 0) goto label_0x1c24d8;                           // 0x001c249c: beqz $v1, 0x1c24d8
    /* nop */                                                   // 0x001c24a0: nop 
    v1 = v1 + -0x30;                                            // 0x001c24a4: addiu $v1, $v1, -0x30
    v1 = v1 & 0xff;                                             // 0x001c24a8: andi $v1, $v1, 0xff
    at = (v1 < 8) ? 1 : 0;                                      // 0x001c24ac: slti $at, $v1, 8
    if (at == 0) goto label_0x1c24d8;                           // 0x001c24b0: beqz $at, 0x1c24d8
    /* nop */                                                   // 0x001c24b4: nop 
    v0 = 0x22 << 16;                                            // 0x001c24b8: lui $v0, 0x22
    v1 = v1 << 2;                                               // 0x001c24bc: sll $v1, $v1, 2
    v0 = v0 + -0xf50;                                           // 0x001c24c0: addiu $v0, $v0, -0xf50
    v1 = v0 + v1;                                               // 0x001c24c4: addu $v1, $v0, $v1
    v1 = *(int32_t*)(v1);                                       // 0x001c24c8: lw $v1, 0($v1)
    v0 = 0x8000 << 16;                                          // 0x001c24cc: lui $v0, 0x8000
    func_001b5050();  // 1b5050                                // 0x001c24d0: jal 0x1b5050
    a0 = v1 | v0;                                               // 0x001c24d4: or $a0, $v1, $v0
label_0x1c24d8:
label_0x1c24dc:
    return;                                                     // 0x001c24dc: jr $ra
    sp = sp + 0x10;                                             // 0x001c24e0: addiu $sp, $sp, 0x10
}