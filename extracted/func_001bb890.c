/** @category graphics/compositor @status complete @author caprado */
void func_001bb890() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_20, local_22, local_24, local_26, local_28;
    
    sp = sp + -0x30;                                            // 0x001bb890: addiu $sp, $sp, -0x30
    s0 = 0x30 << 16;                                            // 0x001bb89c: lui $s0, 0x30
    *(uint32_t*)((gp) + -0x6378) = 0;                           // 0x001bb8a0: sw $zero, -0x6378($gp)
    func_001a09a0();  // 1a09a0                                // 0x001bb8a4: jal 0x1a09a0
    s0 = s0 + 0x7fe0;                                           // 0x001bb8a8: addiu $s0, $s0, 0x7fe0
    func_001aefc0();  // 1aefc0                                // 0x001bb8ac: jal 0x1aefc0
    /* nop */                                                   // 0x001bb8b0: nop 
    a0 = 0xd;                                                   // 0x001bb8b4: addiu $a0, $zero, 0xd
    func_001aefd0();  // 1aefd0                                // 0x001bb8b8: jal 0x1aefd0
    a0 = 0x5f;                                                  // 0x001bb8c0: addiu $a0, $zero, 0x5f
    func_001aefd0();  // 1aefd0                                // 0x001bb8c4: jal 0x1aefd0
    a1 = 5;                                                     // 0x001bb8c8: addiu $a1, $zero, 5
    a0 = 0x60;                                                  // 0x001bb8cc: addiu $a0, $zero, 0x60
    func_001aefd0();  // 1aefd0                                // 0x001bb8d0: jal 0x1aefd0
    a0 = 4;                                                     // 0x001bb8d8: addiu $a0, $zero, 4
    func_001aea70();  // 1aea70                                // 0x001bb8dc: jal 0x1aea70
    a1 = 5;                                                     // 0x001bb8e0: addiu $a1, $zero, 5
    v0 = *(int32_t*)((gp) + -0x6378);                           // 0x001bb8e4: lw $v0, -0x6378($gp)
    if (v0 != 0) goto label_0x1bb91c;                           // 0x001bb8e8: bnez $v0, 0x1bb91c
    /* nop */                                                   // 0x001bb8ec: nop 
    a0 = 0x6c;                                                  // 0x001bb8f0: addiu $a0, $zero, 0x6c
    func_00196050();  // 196050                                // 0x001bb8f4: jal 0x196050
    a1 = 1;                                                     // 0x001bb8f8: addiu $a1, $zero, 1
    func_001a0850();  // 1a0850                                // 0x001bb900: jal 0x1a0850
    a0 = 0x6c;                                                  // 0x001bb908: addiu $a0, $zero, 0x6c
    func_00196050();  // 196050                                // 0x001bb90c: jal 0x196050
    v0 = 1;                                                     // 0x001bb914: addiu $v0, $zero, 1
    *(uint32_t*)((gp) + -0x6378) = v0;                          // 0x001bb918: sw $v0, -0x6378($gp)
label_0x1bb91c:
    at = 0x31 << 16;                                            // 0x001bb91c: lui $at, 0x31
    v0 = g_003137a0;  // Global at 0x003137a0                   // 0x001bb920: lbu $v0, 0x37a0($at)
    if (v0 != 0) goto label_0x1bb938;                           // 0x001bb924: bnez $v0, 0x1bb938
    a0 = 0x58;                                                  // 0x001bb928: addiu $a0, $zero, 0x58
    func_001bbcf0();  // 1bbcf0                                // 0x001bb92c: jal 0x1bbcf0
    /* nop */                                                   // 0x001bb930: nop 
    a0 = 0x58;                                                  // 0x001bb934: addiu $a0, $zero, 0x58
label_0x1bb938:
    func_001b7a70();  // 1b7a70                                // 0x001bb938: jal 0x1b7a70
    /* nop */                                                   // 0x001bb93c: nop 
    if (v0 != 0) goto label_0x1bb9c4;                           // 0x001bb940: bnez $v0, 0x1bb9c4
    /* nop */                                                   // 0x001bb944: nop 
    v0 = g_00307fe4;  // Global at 0x00307fe4                   // 0x001bb948: lh $v0, 4($s0)
    if (v0 != 0) goto label_0x1bb970;                           // 0x001bb94c: bnez $v0, 0x1bb970
    v0 = 0x280;                                                 // 0x001bb950: addiu $v0, $zero, 0x280
    local_20 = 0;                                               // 0x001bb954: sh $zero, 0x20($sp)
    local_24 = v0;                                              // 0x001bb958: sh $v0, 0x24($sp)
    v0 = 0x1c0;                                                 // 0x001bb95c: addiu $v0, $zero, 0x1c0
    local_22 = 0;                                               // 0x001bb960: sh $zero, 0x22($sp)
    local_26 = v0;                                              // 0x001bb964: sh $v0, 0x26($sp)
    goto label_0x1bb9bc;                                        // 0x001bb968: b 0x1bb9bc
    local_28 = 0;                                               // 0x001bb96c: sw $zero, 0x28($sp)
label_0x1bb970:
    v0 = g_00307ff4;  // Global at 0x00307ff4                   // 0x001bb970: lw $v0, 0x14($s0)
    a0 = sp + 0x22;                                             // 0x001bb974: addiu $a0, $sp, 0x22
    v0 = *(int16_t*)((v0) + 4);                                 // 0x001bb978: lh $v0, 4($v0)
    local_20 = v0;                                              // 0x001bb97c: sh $v0, 0x20($sp)
    v0 = g_00307ff4;  // Global at 0x00307ff4                   // 0x001bb980: lw $v0, 0x14($s0)
    v0 = *(int16_t*)((v0) + 6);                                 // 0x001bb984: lh $v0, 6($v0)
    *(uint16_t*)(a0) = v0;                                      // 0x001bb988: sh $v0, 0($a0)
    v1 = g_00307ff4;  // Global at 0x00307ff4                   // 0x001bb98c: lw $v1, 0x14($s0)
    v0 = local_20;                                              // 0x001bb990: lh $v0, 0x20($sp)
    v1 = *(int16_t*)((v1) + 8);                                 // 0x001bb994: lh $v1, 8($v1)
    v0 = v0 + v1;                                               // 0x001bb998: addu $v0, $v0, $v1
    local_24 = v0;                                              // 0x001bb99c: sh $v0, 0x24($sp)
    v1 = g_00307ff4;  // Global at 0x00307ff4                   // 0x001bb9a0: lw $v1, 0x14($s0)
    v0 = *(int16_t*)(a0);                                       // 0x001bb9a4: lh $v0, 0($a0)
    v1 = *(int16_t*)((v1) + 0xa);                               // 0x001bb9a8: lh $v1, 0xa($v1)
    v0 = v0 + v1;                                               // 0x001bb9ac: addu $v0, $v0, $v1
    local_26 = v0;                                              // 0x001bb9b0: sh $v0, 0x26($sp)
    v0 = g_00307fec;  // Global at 0x00307fec                   // 0x001bb9b4: lw $v0, 0xc($s0)
    local_28 = v0;                                              // 0x001bb9b8: sw $v0, 0x28($sp)
label_0x1bb9bc:
    func_001ab530();  // 1ab530                                // 0x001bb9bc: jal 0x1ab530
    a0 = sp + 0x20;                                             // 0x001bb9c0: addiu $a0, $sp, 0x20
label_0x1bb9c4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bb9c8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bb9cc: jr $ra
    sp = sp + 0x30;                                             // 0x001bb9d0: addiu $sp, $sp, 0x30
}